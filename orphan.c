#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
  int pid;
  pid=fork();
  if(pid>0){
    printf("I am a parent process with PID %d my child is %d.\n",getpid(),pid);
  }else{
     printf("I am a child process with PID %d my parent is %d\n",getpid(),getppid());
    sleep(5);
    printf("I am a child process with PID %d my parent is %d\n",getpid(),getppid());
  }

  return 0;
}