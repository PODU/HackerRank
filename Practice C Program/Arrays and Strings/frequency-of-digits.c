#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<strlen(s);i++){
        int ascii = (int)s[i];
        if(ascii>=48 && ascii<=57){
            a[ascii-48]++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

