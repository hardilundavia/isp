#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<ctype.h>

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}
int main()
{
	int f1;
	char buf[50];
	f1=open("upper.txt",O_CREAT|O_WRONLY|O_TRUNC,0664);
	printf("Enter string");
	scanf("%s",&buf);
	
	write(f1,strupr(buf),strlen(buf));
	
	close(f1);
}
