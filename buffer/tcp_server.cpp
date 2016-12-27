#define MYPORT 8888
#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/socket.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<errno.h>
char buf[4000];
void tcp_server(string board)
{
    int sock, new_sd, cnt;
    socklen_t adrlen;
    int re_use_addr=1;
    int ret;
    int status;
    pid_t pid;
    pid_t pc;
 
    struct sockaddr_in myname;
    struct timeval nNetTimeout;
    nNetTimeout.tv_sec = 5;
    nNetTimeout.tv_usec = 0;
 	
    sock = socket(AF_INET, SOCK_STREAM, 0);        /* 套接字的建立 */
    if (sock < 0)
    {
        printf("server socket failure %d\n", errno);
        perror("server: ");
        exit(1);  
    }
    myname.sin_family = AF_INET;
    myname.sin_port = htons(MYPORT);
    myname.sin_addr.s_addr = htonl(INADDR_ANY);
    bzero(&(myname.sin_zero), 8);
 
    ret = setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, (void *)&re_use_addr, sizeof(int));
    if(ret<0)
    {
        perror("setsockopt:");
        return ret;
    }
 
    adrlen = sizeof(struct sockaddr_in);
    if (bind(sock, (struct sockaddr *)&myname, adrlen) < 0) 
    {
        printf("server bind failure %d\n", errno);
        perror("server: ");
        exit(1);
    }
    if (listen(sock, 5) < 0) 
    {        /* listen函数调用 */
        printf("server listen failure %d\n", errno);
        perror("server: ");
        exit(1);  
    }  
 
    /* 忽略子进程的终止  */
//    signal (SIGCHLD, SIG_IGN);
    /*  将服务器置于死循环状态，等待客户端的连接请求的到来。
        实际上，应该用更好的办法来结束这个死循环，在这里这
        个循环是被连接开始信号或者是超级用户终止的。     */
 
#if 0
    //发送时限
    ret = setsockopt(sock, SOL_SOCKET, SO_SNDTIMEO, (char *)&nNetTimeout, sizeof(nNetTimeout));
    if(ret < 0)
    {
        perror("server");
    }
    //接收时限
    ret = setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (char *)&nNetTimeout, sizeof(nNetTimeout));
    if(ret < 0)
    {
        perror("server");
    }
#endif
     
    while (1)
    {
        if ((new_sd = accept(sock, (struct sockaddr *)&myname, &adrlen)) < 0)
        {
            printf("server accept failure %d\n", errno);
            perror("server: ");
            exit(1);
        }
 
        pc = fork();
        if(pc<0)
        {
            perror("[server]");
        }
        if (pc == 0) 
        {  /* 建立子进程 */
            close (sock);  /* 关闭套接字，因为子进程不再需要它  */
 
            memset(buf,0,sizeof(buf));
            cnt = recv(new_sd, buf, sizeof(buf),0);
            if(cnt<0)
            {
                perror("[server]");
            }
            else if(cnt == 0)
            {
                printf(" connection closed by client\n");
            }
            else
            {
                printf("Server got message:[%d]%s\n",cnt,buf);
            }
 
            memset(buf,0,sizeof(buf));
            char tmp[4000];
            for(int i=0;i<board.length();++i){
            	tmp[i]=board[i];
			}
			tmp[board.length()]='\0';
            strcpy(buf, tmp);
            cnt = write(new_sd, buf, sizeof(buf));
 
            close (new_sd); /* close prior to exiting  */
            exit(1);
        }
    }
 
    close (new_sd); /* close prior to exiting  */
    close (sock);  /* 关闭套接字，因为子进程不再需要它  */
}
