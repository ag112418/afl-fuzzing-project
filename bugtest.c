#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char buf[8];

    if (argc < 2) {
        printf("No input provided.\n");
        return 0;
    }

    // Check length before copying (so not all inputs crash)
    if (strlen(argv[1]) < sizeof(buf)) {
        strcpy(buf, argv[1]);
        printf("Input: %s\n", buf);
    } else {
        printf("Too long input detected!\n");
    }

    return 0;
}


