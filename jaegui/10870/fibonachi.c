#include <stdio.h>

int fibonachi(int n){
  if(n==0) return 0;
  else if(n==1) return 1;
  else if(n > 1){
    return fibonachi(n-1)+fibonachi(n-2);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  
  printf("%d", fibonachi(n));
}