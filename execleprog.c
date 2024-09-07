#include<unistd.h>
int main(){
  char *file="/usr/bin/ls";
  char *const args[]={"/usr/bin/ls","-l",NULL};
  execv(file,args);
  return 0;
}