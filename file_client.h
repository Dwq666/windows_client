#include <winsock.h> 
#include <Windows.h>
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;


//用来存储和传输文件名扩展名的结构体
struct FileName
{
	char Fname[64];
	int len;
};



class f_client
{
protected:
    
	SOCKET sock;
    char * ip_addr; //定义ip地址
    int port_addr;// 定义端口号  
    char buf[1024] = {0};  
    FileName fn;   
    
public:
    f_client(char * aip,int aport);
    virtual ~f_client();
    void start();
    int openFile(const char *path);
    int SendFile(const char *path);

};
