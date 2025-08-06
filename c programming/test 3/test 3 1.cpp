#include <stdio.h>

void printEvenOdd(int start, int end) {
    printf("Odd numbers: ");
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\nEven numbers: ");
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}

int main() {
    int start, end;

    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter ending value: ");
    scanf("%d", &end);

    printEvenOdd(start, end);

    return 0;
}