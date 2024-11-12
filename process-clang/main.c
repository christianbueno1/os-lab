#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main( int argc, char* argv[]) {
    int id = fork();
    // printf("Hello, World!\n");
    if (id == 0) {
        printf("Hello, World! I am the child, id=%d\n", id);
    } else {
        printf("Hello, World! I am the parent, id=%d\n", id);
    }

    return 0;
}