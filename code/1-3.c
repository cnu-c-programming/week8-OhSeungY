#include <stdio.h>

char my_strcat(char *dst, const char *src){
    int len = 0;
    char temp = dst[0];
    int count = 0;
    while(temp != '\0'){
        len ++;
        temp = dst[len];
    }
    temp = src[0];
    while(temp != '\0'){
        dst[len + count] = src[count];
        count ++;
        temp = src[count];
    }
    return *dst;
}


int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
