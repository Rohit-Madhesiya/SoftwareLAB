#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
  int pid;
  pid=fork();
  if(pid==0){
    printf("I am a child with %d my parent is %d\n",getpid(),getppid());
    sleep(10);
    printf("I am a child with %d my parent is %d\n",getpid(),getppid());
  }else{
    sleep(1);
    printf("I am a parent with pid %d, my child is %d\n",getpid(),pid);
  }
  return 0;
}