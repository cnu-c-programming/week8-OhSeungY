#include <stdio.h>
#include <string.h>

int main() {
    
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    char **p = names;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(strcmp(names[j],names[j+1]) == 1){
                char* temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}

