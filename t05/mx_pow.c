//#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    unsigned int i = 1;
    double result = 1;
    
    if (pow == 0)
        return 1;
    else 
        while (i <= pow) {
            result *= n;
            i++;
        }
    return result;
}

// int main() {
//     printf("%f",mx_pow(2147483647,3));
// }
