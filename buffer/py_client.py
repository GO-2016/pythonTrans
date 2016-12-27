import socket
def py_client():
    
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect(('localhost', 8888))
    sock.send('1')
    info=sock.recv(4096)
    sock.close()
    return info
