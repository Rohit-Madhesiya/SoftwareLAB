#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isHappy(int num){
  int res=0;
  while(num>0){
    res+=pow(num%10,2);
    num/=10;
  }
  return res;
}
int main(int argc,char *argv[]){
  int num=atoi(argv[1]);

  while(num!=1&&num!=4){
    num=isHappy(num);
  }
  if(num==1)
    printf("It is a Happy Number\n");
  else
    printf("IT is a Unhappy Number\n");
  return 0;
}