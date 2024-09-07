#include<stdio.h>
#include<stdlib.h>
#include<wait.h>
#include<unistd.h>
int main(){
  int pid;
  pid=fork();
  if(pid==0){
    printf("I am a child with Pid %d, my parent is %d\n",getpid(),getppid());
    sleep(5);
    printf("I am a child with Pid %d, my parent is %d\n",getpid(),getppid());
  }else{
    printf("I am a Parent with pid %d, my child is %d\n",getpid(),pid);
    sleep(15);
  }
  return 0;
}