#include <ctype.h>
#include <stdio.h>
#include <string.h>

char* replace(char* input) {
    int i;
    for(i = 0; i < strlen(input); i++) {
        switch(input[i]) {
            case 'a':
            case 'A':
                input[i] = '6';
                break;
            case 'e':
            case 'E':
                input[i] = '3';
                break;
            case 'i':
            case 'I':
                input[i] = '1';
                break;
            case 'o':
            case 'O':
                input[i] = '0';
                break;
            default:
                break;
        }
    }
    return input;
}

int main(int argc, char** argv) {

    if(argc != 2) {
        printf("Error: Invalid number of arguments\n");
        return 1;
    }

    char* input = argv[1];
    char* output = replace(input);
    printf("%s\n", output);

    return 0;
}