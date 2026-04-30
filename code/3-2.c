#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    for(int i=argc; i>0; i++){
        for(int j=1; j<i; j++){
            if(strcmp(argv[j],argv[j+1]) == 1){
                char *temp = *(argv + j);
                *(argv + j) = *(argv + j + 1);
                *(argv + j + 1) = temp; 
            }
        }
    }
    
    for(int i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }

    return 0;
}
