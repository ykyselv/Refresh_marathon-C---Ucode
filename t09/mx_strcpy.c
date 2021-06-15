//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    char *temp = dst; 
            
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return temp;
}

// int main() {
//     char dst[10];
//     char src[10] = "Hello";
//     printf("%s\n", mx_strcpy(dst, src));
// }
