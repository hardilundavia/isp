#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main()
{
	char msg[]="Hello world";
	write(STDOUT_FILENO,msg,strlen(msg));
}
