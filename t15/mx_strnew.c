// #include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 0)
        return NULL;
    char *arr = (char *) malloc(sizeof(char) * (size + 1));
    for(int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}

// int main() {
//     char *arr = mx_strnew(0);
//     printf("%s", arr);
//     system("leaks -q a.out");
// }
