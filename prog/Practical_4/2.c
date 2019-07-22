#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,n;
	char buf[80];
	fd1=open("f1.txt",O_RDONLY);
	fd2=open("f2.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
	
	while((n=read(fd1,buf,80))>0)
		write(fd2,buf,n);	
	printf("Copy Complete...\n");
}
