void mx_foreach (int *arr, int size, void(*f)(int)) {
    for (int i = 0; i < size; i++) 
        f(arr [i]);
}

// #include <unistd.h>

// void mx_printchar(char c) {
//     write(1,&c,1);
// }

// void mx_printint (int n) {
//         if ( n < 0 ) {
//         mx_printchar('-');       
//         n = n*(-1);
//         }
//         if ( n >= 0 && n <= 9) {
//         mx_printchar(n + 48);
//         }
//         if ( n > 9 ) {
//             mx_printint(n/10);
//             mx_printchar (n%10 + 48);
//         }
// }

// int main () {
// int arr []= {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint); 
// }
