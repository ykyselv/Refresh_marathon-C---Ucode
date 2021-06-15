// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int top = size - 1;
    int mid = 0;
    int bottom = 0;
    
    while (bottom <= top) {
        (*count)++; 
        mid = (bottom + top) / 2;
        if (mx_strcmp(arr[mid], s) > 0 ) 
            top = mid - 1;
        else if (mx_strcmp(arr[mid], s) < 0) 
            bottom = mid + 1;
        else 
            return mid;
    }
    *count = 0;
    return -1;
}

// int main () {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d",mx_binary_search(arr,6,"aBz", &count));
//     printf("%d",count);
// }
