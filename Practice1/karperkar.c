#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int countDigit(int n){
  int c=0;
  while(n>0){
    n=n>>1;
    c++;
  }
  return c;
}

int main(int argc,char *argv[]){
  int n=atoi(argv[1]);
  bool flag=false;
  if(n==0){
    flag=true;
  }else{
    int sq=n*n;
    int digit=countDigit(n);
    for(int i=1;i<digit;i++){
      int t=(int)pow(10,i);
      if(t==n)continue;
      int res=(sq%t)+(sq/t);
      if(res==n){
        flag=true;
        break;
      }
    }
  }
  if(flag){
    printf("%d is a Karperkar Number\n",n);
  }else{
    printf("%d is not a Karperkar Number\n",n);
  }
  return 0;
}