#include <stdio.h>

int my_strcmp(const char *a, const char *b){
    int count = 0;
    while(a[count] == b[count]){
        count++;
        if(a[count] == NULL && a[count] == NULL){
            break;
        }
    }
    return a[count] - b[count];
}

int main() {
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
