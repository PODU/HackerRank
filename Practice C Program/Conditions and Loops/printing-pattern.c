#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int size = 2 * n - 1;
    
    for(int i = 0; i < size; i++){
        int numToPrint = n;
        int add = 0;
        for (int j = 0; j < size; j++) {
            if(i == j || i == (size - j -1)){
                for(int k = 0; k < (2 * numToPrint - 1); k++){
                    printf("%d ", numToPrint);
                    if(k != (2 * numToPrint - 2))
                        j++;
                }
                add = 1;
            } else {
                if(add == 1){
                    numToPrint++;
                    printf("%d ", numToPrint);
                } else {
                    printf("%d ", numToPrint);
                    numToPrint--;
                }
            }
            if(numToPrint == 1){
                add = 1;
            }
        }
        printf("\n");
    }
    
    return 0;
}

