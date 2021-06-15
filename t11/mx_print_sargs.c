void mx_printchar(char c);
void mx_printstr (const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const char*s1, const char*s2);


int main (int argc, char **argv) {
    char *reserv;
    
    for (int i = 1; i < argc - 1; i++) {
        for (int j = 1; j < argc - 1; j++) {
            if (mx_strcmp(argv[j], argv[j+1]) > 0) {
                reserv = argv[j];
                argv[j] = argv [j+1];
                argv [j+1] = reserv;
            }
        }
    }
    for (int k = 1; k < argc; k++) {
        mx_printstr(argv[k]);
        mx_printchar('\n');
    }
}
 
