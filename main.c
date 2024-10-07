#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void showArgsList();
static void clearScreen();

int main(int argc, char** argv) {
    if(argc == 0) {
        printf("No args: no args were passed\nType --help to see the full args list");
        return 1;
    } else {
        if(strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
            clearScreen();
            showArgsList();
        } else if(strcmp(argv[1], "--file") == 0 || strcmp(argv[1], "-f") == 0) {
            if(argv[2] == NULL) {
                printf("File not specified: was not specified a path for the file\n\tUsage: --file <file> or -f <file>");
                return 1;
            } else {
                FILE* input = fopen(argv[2], "r");

                if(input == NULL) {
                    printf("File not found: the specified file was not found");
                    return 1;
                } else {

                }
            }
        } else {
            printf("Argument not found: the specified argument was not found, use --help to see the full args list\n\tUsage: --help or -h");
            return 1;
        }
    }
    return 0;
}

static void showArgsList() {
    printf("Args:\n\t--help or -h\tShow the argments list\n\t--file or -f\tInput a file to the main program");
}

static void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #elif _LINUX_
        system("clear");
    #endif
}