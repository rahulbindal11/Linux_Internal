#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void)
{
	pid_t pid1;
	
		pid1=fork();
		
		if(pid1==0)
		{
			sleep(5);
			printf("I am child with delay of 5 sec and mychild pid = %d\n", getpid());
		}
		else{
		int pid2;
		printf("I am parent pro pid=%d\n", getpid());
		pid2=wait(0);
		
		printf("parent saying.. child %d exited/terminated normally\n",pid2);
		printf("I am parent process pro pid=%d\n", getpid());
		}
		return 0;
} 
