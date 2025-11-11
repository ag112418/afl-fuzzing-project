#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buf[4];
    if (argc < 2) return 0;
    strcpy(buf, argv[1]);  // intentionally unsafe for fuzzing
    if (buf[0] == 'X') printf("Crash!\n");
    return 0;
}
