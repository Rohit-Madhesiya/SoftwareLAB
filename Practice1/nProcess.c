#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
  int n=atoi(argv[1]);
  for(int i=0;i<n;i++){
    if(fork()==0){
      printf("I am a child with pid %d, my parent is %d\n",getpid(),getppid());
      exit(0);
    }
  }
  for(int i=0;i<n;i++){
    wait(0);
  }
  return 0;
}