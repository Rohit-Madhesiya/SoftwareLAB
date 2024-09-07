#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv){
  // fork();
  if(fork()||fork()){
    fork();
    printf("Hello World!\n");
  }
  return 0;
}