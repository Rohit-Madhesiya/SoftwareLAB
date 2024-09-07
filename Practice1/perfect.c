#include<stdio.h>
#include<stdlib.h>
int isPerfect(int num){
  int sum=0;
  for(int i=1;i<=num/2;i++){
    if(num%i==0)
      sum+=i;
  }
  return sum==num;
}

int main(int argc,char *argv[]){
  int num=atoi(argv[1]);
  int res=isPerfect(num);
  if(res==1)
    printf("It is a Perfect Number\n");
  else
    printf("It is not a perfect number\n");
  return 0;
}