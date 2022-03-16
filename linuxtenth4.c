#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int pid;
	pid= fork();
	
	if(pid==0)
{
	printf("this is a child process=%d\n",getpid());
}
	else{
	printf("this is a parent process=%d\n",getppid());
}
	return 0;
}
