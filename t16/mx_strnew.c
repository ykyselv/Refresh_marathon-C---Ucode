#include <stdlib.h>
//#include <stdio.h>

char *mx_strnew(const int size) {
    char *str_new = malloc(sizeof(char)*size+1);
    if (str_new == NULL || size <= 0) {
        return NULL;
    }
    else {
        for (int i = 0; i < size; i++) {
            str_new[i] = '\0';
        }
        return str_new;
    }
}

// int main() {
//     printf("%s\n",mx_strnew(-1));
//     // printf("%s\n",mx_strnew(2));
//     // printf("%s\n",mx_strnew(3));
//     // printf("%s\n",mx_strnew(4));
// }
