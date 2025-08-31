#include <stdio.h>

// 1. Without parameter, without return type
void printAlternate1() {
    int n, arr[20];
    printf("\nEnter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nAlternate Elements: ");
    for(int i=0; i<n; i+=2)
        printf("%d ", arr[i]);
}

// 2. With parameter, without return type
void printAlternate2(int arr[], int n) {
    printf("\nAlternate Elements: ");
    for(int i=0; i<n; i+=2)
        printf("%d ", arr[i]);
}

int main() {
    int arr[6] = {11, 22, 33, 44, 55, 66};

    printf("---- Using Type 1 ----");
    printAlternate1();

    printf("\n\n---- Using Type 2 ----");
    printAlternate2(arr, 6);

    return 0;
}
