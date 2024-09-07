#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void inthandler(int signum){
  printf("SIGINT received, inside hanlder\n");
}
void termhandler(int signum){
  printf("SIGTERM receiver, inside handler\n");
}
int main(){
  signal(SIGINT,inthandler);
  signal(SIGTERM,termhandler);
  while(1){
    printf("Hello, World\n");
    sleep(2);
  }
  return 0;
}