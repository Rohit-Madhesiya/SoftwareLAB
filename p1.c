#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc,char* argv[]){
  int pid;
  pid=fork();
  char *const arr[]={argv[2],argv[3],NULL};
  if(pid==0){
    printf("Overriding Another Process...\n");
    execv(argv[1],arr);
    printf("Never be executed.\n");
  }else{
    int k=wait(0);
    printf("Child Process %d is Terminated\n",k);
  }
  return 0;
}