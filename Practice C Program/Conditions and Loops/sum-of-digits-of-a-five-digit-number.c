#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    do {
        int r = n % 10;
        sum += r;
        n = n / 10;
    } while(n > 0);
    printf("%d", sum);
    return 0;
}

