#include<stdio.h>
#include<stdlib.h>
int fact(int n){
  if(n<=0)return 1;
  else return n*fact(n-1);
}
int main(int argc,char* argv[]){
  int n=atoi(argv[1]);
  printf("Factorial of %d is: %d\n",n,fact(n));
  return 0;
}