#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("Before fork()\n");
pid_t p=fork();
if(p<0)
{
printf("fork is failed");
}
else if(p==0)
{
printf("My id is: %d\n",getpid());
printf("My parents id id: %d\n",getppid());
}
else
{
printf("My id is: %d\n",getpid());
}
printf("Done\n");
}
