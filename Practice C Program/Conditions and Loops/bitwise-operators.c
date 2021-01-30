#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and = 0, or = 0,exor = 0;
  for(int i = 1;i <= n;i++){
      for(int j = 1; j <= n; j++){
          if(i == j) continue;
          if(k > (i & j)){
              if(and < (i & j)) {
                  and = (i & j);
              }
          }
          if(k > (i | j)){
              if(or < (i | j)) {
                  or = (i | j);
              }
          }
          if(k > (i ^ j)){
              if(exor < (i ^ j)) {
                  exor = (i ^ j);
              }
          }
      }
  }
  printf("%d\n%d\n%d", and, or,exor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

