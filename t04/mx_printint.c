#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n  == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        mx_printchar('-');       
        n *= -1;
    }
    if (n >= 0 && n <= 9) {
        mx_printchar(n + 48);
    }
    if (n > 9) {
        mx_printint(n / 10);
        mx_printchar(n % 10 + 48);         
    } 
}

// int main() {
//     mx_printint(2147483647);
//     mx_printchar(10);
//     mx_printint(-21474);
//     mx_printchar(10);
//     mx_printint(55);
//     mx_printchar(10);
// }
