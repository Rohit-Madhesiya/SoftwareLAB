#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(){
  int fd;
  char buff[50];
  fd=open("file.txt",O_RDONLY);
  printf("fd=%d\n",fd);
  if(fd==-1){
    printf("Error Number %d\n",errno);
    perror("Program");
  }
  int size=read(fd,buff,50);
  buff[size]='\0';
  printf("Bytes are as follows: %s\n",buff);
  close(fd);
  return 0;
}