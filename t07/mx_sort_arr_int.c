//#include <stdio.h>

void mx_sort_arr_int (int *arr, int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// int main () {
//     int arr []= {3, 55, -11, 1, 0, 4, 22};
//     int size = 7;
//     mx_sort_arr_int(arr, 7); 
//     for (int i = 0; i < size; i++) {
//     printf ("%d--", arr[i]);
//     }
// }
