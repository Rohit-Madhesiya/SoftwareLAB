#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main(int argc, char *argv[]){
  int n=atoi(argv[1]);
  bool flag=true;
  if(n==2||n==3)
    flag=true;
  else if(n%2==0||n%3==0)
    flag=false;
  else{
    for(int i=5;i<n/2;i+=6){
      if(n%i==0||n%(i+1)==0)
      {  flag=false;
       break;
      }
    }
  }
  if(flag){
    printf("%d is a Prime Number\n",n);
  }else{
    printf("%d is not a prime number\n",n);
  }
  return 0;
}