#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
  int num=atoi(argv[1]);
  int temp=num;
  int rev=0;
  while(temp>0){
    rev=(rev*10)+(temp%10);
    temp/=10;
  }
  if(rev==num){
    printf("It is a Palindrome Number\n");
  }else{
    printf("Not a Palindrome Number\n");
  }
  return 0;
}