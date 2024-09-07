#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void signhandler(int signum){
	printf("SIGINT received. Inside signhandler\n");
}

int main(){
	signal(SIGINT,signhandler);
	while(1){
		printf("Program Running\n");
    sleep(1);
  }
	return 0;
}