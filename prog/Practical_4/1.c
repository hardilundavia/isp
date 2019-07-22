#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  	char msg[80];
  	int fd;
  	
  	fd=open("f1.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
  	printf("Enter message : ");
  	gets(msg);
  	
  	write(fd,msg,strlen(msg));
	close(fd);
	fd=open("f1.txt",O_RDONLY);
	read(fd,msg,msg);
	printf("Ur message:%s\n",msg);
	close(fd);
}
