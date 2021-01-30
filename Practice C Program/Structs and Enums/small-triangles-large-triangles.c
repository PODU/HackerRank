#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;



double area(triangle t){
    double p = (((double)t.a + t.b + t.c) / 2);
    double s = sqrt(p * (double)(p - t.a) * (double)(p - t.b) * (double)(p - t.c));
    return s;
}

void sort_by_area(triangle* tr, int n) {
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(area(tr[i]) > area(tr[j])){
                triangle t;
                t.a = tr[i].a;
                t.b = tr[i].b;
                t.c = tr[i].c;
                
                tr[i].a = tr[j].a;
                tr[i].b = tr[j].b;
                tr[i].c = tr[j].c;
                
                tr[j].a = t.a;
                tr[j].b = t.b;
                tr[j].c = t.c;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
