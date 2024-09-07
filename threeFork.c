#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
  int pid1,pid2,k1,k2;
  pid1=fork();
  if(pid1>0){
    pid2=fork();
    if(pid2>0){
      
      printf("I am a parent process with %d, my child1 process is %d and my child2 process is %d\n",getpid(),pid1,pid2);
      k1=wait(0);
    printf("Child2 with PID %d is terminated.\n",k1);
      k2=wait(0);
    printf("Child1 with PID %d is terminated.\n",k2);
    }else{
      printf("I am a child2 process with %d, my parent process is %d\n",getpid(),getppid());
    }

  }else{
      printf("I am a child1 process with %d, my parent process is %d\n",getpid(),getppid());
  }
  return 0;
}