//#include <stdio.h>

int mx_strlen(const char *c) {
    int counter = 0;
    
    while (*c !='\0') {
        c++;
        counter++;
    }
    return counter;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    int len = mx_strlen(hex);
    unsigned long dec = 0;
    unsigned long base = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            dec = dec + ((hex[i] - 48) * base);
            base = base * 16;
        }
        else if (hex[i] >= 'A' && hex [i] <= 'F') {
            dec = dec + ((hex[i] - 55) * base);
            base = base * 16;
        }
        else if (hex[i] >= 'a' && hex [i] <= 'f') {
            dec = dec + ((hex[i] - 87) * base);
            base = base * 16;
        }
        else return 0;
    }
    return dec;
}

// int main() {
//     const char hex[] = "ffffffffffff";
//     printf("%lu", mx_hex_to_nbr(hex));
// }
