#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int arr[] = {1, 2, 3, 2, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("\nThe array is a palindrome.\n");
    } else {
        printf("\nThe array is NOT a palindrome.\n");
    }

    return 0;
}
