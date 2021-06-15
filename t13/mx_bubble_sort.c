//#include <stdio.h>

int mx_strcmp(const char*s1, const char*s2);

int mx_bubble_sort(char **arr, int size) {
    char *temp;
    int counter = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++ ) {
            if (mx_strcmp(arr[j], arr[j+1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                counter ++;
            }
        }
    }
    return counter;
}

// int main() {

//     char *arr []= {"abc", "xyz", "ghi", "def"};
//     int size = 4;
//     printf("%d\n",mx_bubble_sort(arr, size)); 
//     char *arr1 []= {"abc", "acb", "a"};
//     printf("%d",mx_bubble_sort(arr1, 3));
// }
