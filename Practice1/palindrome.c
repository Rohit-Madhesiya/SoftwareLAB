#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
  int num=atoi(argv[1]);
  int rev=0,temp=num;
  while(temp>0){
    rev=(rev*10)+temp%10;
    temp/=10;
  }
  if(rev==num)
    printf("%d is a Palindrome Number\n",num);
  else
    printf("%d is not a palindrome number\n",num);
  return 0;
}