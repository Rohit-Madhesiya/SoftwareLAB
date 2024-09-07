#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isHappy(int num){
  int sum=0;
  while(num>0){
    sum+=pow((num%10),2);
    num/=10;
  }
  return sum;
}
int main(int argc,char *argv[]){
  int n=atoi(argv[1]);
  while(n!=1&&n!=4){
    n=isHappy(n);
  }
  if(n==1)
      printf("Happy Number\n");
  else if(n==4)
      printf("UnHappy Number\n");
  return 0;
}