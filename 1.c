#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc,char *argv[]){
  int pid1,pid2;
  pid1=fork();
  if(pid1>0){
    pid2=fork();
    if(pid2>0){
      int k1=wait(0);
      int k2=wait(0);
      printf("Current PID: %d\n",getpid());
      printf("Process %d Terminated\n",k1);
      printf("Process %d Terminated\n",k2);
    }else{
      printf("Current PID: %d\n",getpid());
      printf("Calling Factorial...\n");
      execl(argv[4],argv[5],argv[6],NULL);
    }
  }else{
      printf("Current PID: %d\n",getpid());
      printf("Calling Palindrome....\n");
      execl(argv[1],argv[2],argv[3],NULL);
  }
  return 0;
}