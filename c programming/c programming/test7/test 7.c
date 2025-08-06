#include <stdio.h>
void swapPositions(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int main() {
    int arr[] = {11, 23, 30, 4, 21, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int y = 4; 
    printf("Original Array: ");
    for(int i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
    swapPositions(arr, x, y);

    
    printf("\nSwapped Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}