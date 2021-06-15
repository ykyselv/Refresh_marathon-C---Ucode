// #include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

// int main() {
//    char dst[20];
//    char src[20] = "hello";
//    printf(("%s"), mx_strcpy(dst, src));
// }
