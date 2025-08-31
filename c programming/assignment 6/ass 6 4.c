#include <stdio.h>

// Without parameter, without return type
void arraySum1() {
    int n, arr[10], sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); sum+=arr[i]; }
    printf("Sum = %d\n", sum);
}

// With parameter, without return type
void arraySum2(int arr[], int n) {
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    printf("Sum = %d\n", sum);
}

int main() {
    int arr[5]={1,2,3,4,5};
    arraySum1();
    arraySum2(arr,5);
    return 0;
}
