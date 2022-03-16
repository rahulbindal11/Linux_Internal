#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

void callback1(void)
{
	printf("callback func. 1 \n");
}

void callback2(void)
{
	printf("callback func. 2 \n");
}

void callback3(void)
{
	printf("callback func. 3 \n");
}

int main(){

printf("registering callback1 \n");
atexit(callback1);
printf("registering callback2 \n");
atexit(callback2);
printf("registering callback3 \n");
atexit(callback3);

}

