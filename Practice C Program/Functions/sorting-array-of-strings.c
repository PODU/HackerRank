#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lexicographic_sort(const char* a, const char* b) {
    int size = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    for(int i =0 ;i < size; i++){
        int char_a = 0, char_b = 0;
        if(strlen(a) > i){
            char_a = (int)a[i];
        }
        if(strlen(b) > i){
            char_b = (int)b[i];
        }
        if(char_a > char_b) {
            return 1;
        } else if (char_a < char_b) {
            return -1;
        }
    }
    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    int size = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    for(int i =0 ;i < size; i++){
        int char_a = 0, char_b = 0;
        if(strlen(a) > i){
            char_a = (int)a[i];
        }
        if(strlen(b) > i){
            char_b = (int)b[i];
        }
        if(char_a < char_b) {
            return 1;
        } else if (char_a > char_b) {
            return -1;
        }
    }
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int stra[26],strb[26];
    for(int i=0;i<26;i++){
        stra[i] = 0;
        strb[i] = 0;
    }
    for(int i=0;i<strlen(a); i++){
        int ascii = (int)(a[i]);
        ascii -= 97;
        stra[ascii] = 1;
    }
    for(int i=0;i<strlen(b); i++){
        int ascii = (int)(b[i]);
        ascii -= 97;
        strb[ascii] = 1;
    }
    int suma=0,sumb=0;
    for(int i=0;i<26; i++){
        suma += stra[i];
        sumb += strb[i];
    }
    return suma > sumb ? 1 : (suma == sumb ? lexicographic_sort(a, b) : -1);
}

int sort_by_length(const char* a, const char* b) {
    return strlen(a) > strlen(b) ? 1 : (strlen(a) == strlen(b)? lexicographic_sort(a, b) : -1);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(((*cmp_func)(arr[i], arr[j])) == 1){
                char *temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
