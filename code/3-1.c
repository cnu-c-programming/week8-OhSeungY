#include <stdio.h>
#include <string.h>

int main() {
    
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    for(int i=n; i>=0; i--){
        for(int j=0; j<i; j++){
            if(strcmp(names[j],names[j+1]) == 1){
                char* temp = *(names + j);
                *(names + j) = *(names + j + 1);
                *(names + j + 1) = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        if(i < 5){
            printf("%s\n", names[i]);
        }else{
            printf("%s", names[i]);
        }
    }

    return 0;
}
