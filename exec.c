#include<stdio.h>
#include<unistd.h>
int main()
{
	char* cmnd="ls";
	char* argument[]={"ls","-1",NULL};
	printf("Before execvp()\n");
	pid_t p=fork();
	if(p==0)
	{
		printf("Child process\n");
		int status= execvp(cmnd,argument);
		if(status=-1)
	{
		printf("Terminated\n");
	}
	else
	{
		printf("Parents process\n");
		printf("Done\n");
	}
}
}
