#include<stdio.h>
#include<fcntl.h>
int main()
{
	int f1,a;
	f1=open("f1.txt",O_RDONLY,0644);
	a=lseek(f1,0,SEEK_END);
	printf("Size : %d",a);
}
