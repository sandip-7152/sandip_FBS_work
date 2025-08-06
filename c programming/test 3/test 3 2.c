#include <stdio.h>
int sumAlternate(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    int result = sumAlternate(start, end);

    printf("Sum of alternate numbers = %d", result);

    return 0;
}
