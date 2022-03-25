//PRANALI MAHALE//
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	
	char Rbuff[1000];
	
	int fd1  =  open("input.txt", O_RDONLY, 777);        	
	int fd2  =  open("output.txt",O_RDWR, 777);	  
	int len;
	
	read(fd1, Rbuff, 200);
	
	printf("data read = %s\n",Rbuff);
	
	len = write(fd2, Rbuff, 200);
	
	printf("Data Written = %d \n", len);
	
	
	
	close(fd2);
	close(fd1);

return 0;	
}
