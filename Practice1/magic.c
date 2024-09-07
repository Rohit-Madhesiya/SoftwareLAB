#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
  int num=atoi(argv[1]);
  int sum=0,temp=num;
  while(temp>0){
    sum+=temp%10;
    temp/=10;
  }
  temp=sum;
  int rev=0;
  while(temp>0){
    rev=rev*10+temp%10;
    temp/=10;
  }
  if(rev*sum==num)
    printf("It is a Magic Number\n");
  else
    printf("It is not a magic number\n");
  return 0;
}