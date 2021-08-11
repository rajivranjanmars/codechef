#include "stdio.h"
int main(){
    int n,k,t,r=0;   
    scanf("%d%d",&n,&k); // n=no. of cases k is divisor 
    for(int i=0; i <n; i++){
      scanf("%d",&t);
      if (t%k == 0)      // t is dividend and r is result
      r++; 
    }
    printf("%d",r);
}
