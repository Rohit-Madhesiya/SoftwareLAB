#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(int argc,char *argv[]){
  char *path=argv[1];
  char *fname=argv[2];
  char *param1=argv[3];
  if(fork()==0){
    printf("Executing Child Process...\n");
    execl(path,fname,param1,NULL);
    printf("This will never be executed!\n");
  }else{
    printf("Parent Class is invoked!\n");
    wait(0);
  }
  return 0;
}