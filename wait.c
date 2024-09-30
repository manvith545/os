#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
printf("Begin\n");
pid_t p=fork();
if(p<0)
{
printf("fork is failed\n");
}
else if(p==0)
{
printf("child process\n");
}
else
{
printf("parents process\n");
wait(NULL);
printf("child is terminated\n");
}
printf("Done\n");
}
