#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
	
int main(int argc,char *argv[]){
	int i;
	printf("file name: %s\n",argv[0]);
	printf("total no. of arguments: %d\n",argc);
	printf("argument passed: ");
	
	for(i=1;i<argc;i++)
	{
	printf("%s",argv[1]);
	}
return 0;
}
	

