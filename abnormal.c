#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){
  int i=0;
  int pid,exit_stat,k,status;
  pid=fork();
  if(pid==0){
    printf("Enter exit status: ");
    scanf("%d",&i);
    sleep(10);
  }else{
    sleep(5);
    kill(pid,SIGINT);
    k=wait(&status);
    if(status&0xff!=0){
      printf("Process with signal %d is interrupted with signal %d\n",k,status);
    }else{
      exit_stat=(int)status/256;
      printf("Process with %d is terminated with exit value %d\n",k,exit_stat);
    }
  }
}