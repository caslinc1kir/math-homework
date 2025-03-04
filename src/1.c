
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;

    printf("What is %d times %d?\n", num1, num2);

    return 0;
}