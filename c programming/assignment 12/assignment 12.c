#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size.\n");
        return 1;
    }

    // allocate memory for n integers
    int *arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL) {               // always check malloc result
        perror("malloc failed");
        return 1;
    }

    // input elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    // print elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // always free
    free(arr);
    return 0;
}
