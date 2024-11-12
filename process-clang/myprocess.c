// main.c
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Program has started...\n");
    // Infinite loop to keep the process running for observation
    // can use the command "ps -ef | grep myprocess" to check the process
    while (1) {
        sleep(5);
        printf("Program is still running...\n");
    }
    return 0;
}
