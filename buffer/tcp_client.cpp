#define SERVER_PORT 5000
#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<assert.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<errno.h>
#include <arpa/inet.h>
#include <netdb.h>
char buf[2000];
struct sockaddr_in myname;
string tcp_client()
{
    int sock, adrlen, cnt;
    int ret;
    struct hostent *h;
 
    if (((h=gethostbyname("127.0.0.1")) == NULL))
    {
        herror("gethostbyname");
        exit(1);
    }
 
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) 
    {
        printf("client socket failure %d\n", errno);
        perror("client: ");
        exit(1);  
    }
 
    myname.sin_family = AF_INET;
    myname.sin_port = htons(SERVER_PORT);
    myname.sin_addr = *((struct in_addr *)h->h_addr);
    bzero(&(myname.sin_zero), 8);
 
    ret = connect(sock, (struct sockaddr *) &myname, sizeof(struct sockaddr));
    if(ret<0) 
    {
        perror("cannot connect ");
        exit(1);
    }
 
    memset(buf,0,sizeof(buf));
    strcpy(buf, "[dancy]send message to server");
    cnt = send(sock, buf, strlen(buf),0);
 
    memset(buf,0,sizeof(buf));
    cnt = read(sock, buf, sizeof(buf));
    printf("Client got message:[%d]%s\n", cnt,buf);
    string result[2000];
    for(int i=0;i<strlen(buf);i++){
    	result[i]=buf[i];
	}
	return result;
    exit(0);
}
