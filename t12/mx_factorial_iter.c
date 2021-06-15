// #include <stdio.h>

int mx_factorial_iter(int n) {
    unsigned int result = 1;
    
    if (n == 0)
        return 1;
    if (n < 0 || n >= 13) 
        return 0;
    for (int i = 1; i <= n; i++ ) 
        result = result * i;
    return result;
}

// int main() {
//     printf("%d",mx_factorial_iter(19));
// }
