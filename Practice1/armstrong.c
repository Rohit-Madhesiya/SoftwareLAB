#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count(int n){
  int res=0;
  while(n>0){
    res++;
    n/=10;
  }
  return res;
}
int main(int argc,char *argv[]){
  int num=atoi(argv[1]);
  int len=count(num),temp=num;
  int res=0;
  while(temp>0){
    res+=(int)pow(temp%10,len);
    temp/=10;
  }
  if(res==num)
    printf("It is an Armstrong Number\n");
  else
    printf("It is not an armstrong number\n");
  return 0;
}