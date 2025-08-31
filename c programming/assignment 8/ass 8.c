#include <stdio.h>

// 1. Without parameter, without return type
void findOddEven1() {
    int n, arr[20];
    printf("\nEnter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nEven Numbers: ");
    for(int i=0; i<n; i++)
        if(arr[i] % 2 == 0) printf("%d ", arr[i]);

    printf("\nOdd Numbers: ");
    for(int i=0; i<n; i++)
        if(arr[i] % 2 != 0) printf("%d ", arr[i]);
}

// 2. With parameter, without return type
void findOddEven2(int arr[], int n) {
    printf("\nEven Numbers: ");
    for(int i=0; i<n; i++)
        if(arr[i] % 2 == 0) printf("%d ", arr[i]);

    printf("\nOdd Numbers: ");
    for(int i=0; i<n; i++)
        if(arr[i] % 2 != 0) printf("%d ", arr[i]);
}

int main() {
    int arr[6] = {12, 7, 5, 10, 18, 9};

    printf("---- Using Type 1 ----");
    findOddEven1();

    printf("\n\n---- Using Type 2 ----");
    findOddEven2(arr, 6);

    return 0;
}
