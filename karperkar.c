#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int count(int n){
  int res=0;
  while(n>0){
    res++;n/=10;
  }
  return res;
}
bool isKarperkar(int num){
  if(num==1)return true;
  int nsq=num*num;
  int digit=count(nsq);
  for(int i=1;i<digit;i++){
    int part=(int)pow(10,i);
    if(part==num)continue;
    int sum=(nsq/part)+(nsq%part);
    if(sum==num)return true;
  }
  return false;
}
int main(){
  if(isKarperkar(45)==true)
      printf("YES!\n");
  else
      printf("NO\n");
  return 0;
}