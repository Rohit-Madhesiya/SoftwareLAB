#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char* argv[]){
  printf("No. of Command Line Arguments is %d\n",argc);
  for(int i=0;i<argc;i++){
    printf("Argument[%d] is %s\n",i,argv[i]);
  }
  int pid=fork();
  int k;
  if(pid==0){
    printf("I am a child process with PID %d, my parent process is %d\n",getpid(),getppid());
    printf("Process overriding another program...\n");
    execl(argv[1],argv[2],argv[3],(char*)0);
    printf("This will never be exectued!");
  }else{
    k=wait(0);
    printf("Process child PID %d is Terminated\n",k);
    printf("I am a Process with PID %d, my child is %d\n",getpid(),k);
  }
  return 0;
}
