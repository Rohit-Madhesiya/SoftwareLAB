#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
  int n=atoi(argv[1]);
  int res=0;
  for(int i=1;i<n;i++){
    if(n%i==0)
      res+=i;
  }
  if(res==n)
    printf("Perfect number\n");
  else
    printf("Not a perfect number\n");
  return 0;
  
}