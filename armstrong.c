#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int digitCount(int num){
  int res=0;
  while(num>0){
    res++;
    num/=10;
  }
  return res;
}
int main(int argc,char *argv[]){
  int n=atoi(argv[1]);
  int temp=n,res=0;
  
  int len=digitCount(n);
  while(temp>0){
    int t=temp%10;
    res+=pow(t,len);
    temp/=10;
  }
  if(res==n)
    printf("Armstrong Number\n");
  else
    printf("Not an Armstrong Number\n");
  return 0;
}