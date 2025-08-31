#include <stdio.h>

// Utility
int factorial(int n) {
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

// 1. Without parameter, without return type
void fact1() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Factorial = %d\n", factorial(n));
}

// 2. With parameter, without return type
void fact2(int n) {
    printf("Factorial = %d\n", factorial(n));
}

// 3. Without parameter, with return type
int fact3() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    return factorial(n);
}

// 4. With parameter, with return type
int fact4(int n) {
    return factorial(n);
}

// ---- RANGE Example (Only 2 types) ----

// Without parameter, without return type
void rangeFact1() {
    int n;
    printf("Enter range: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) printf("%d! = %d\n", i, factorial(i));
}

// With parameter, without return type
void rangeFact2(int n) {
    for(int i=1;i<=n;i++) printf("%d! = %d\n", i, factorial(i));
}

int main() {
    int n=5;

    fact1();
    fact2(n);
    printf("Returned (fact3) = %d\n", fact3());
    printf("Returned (fact4) = %d\n", fact4(n));

    printf("\nRange Factorial:\n");
    rangeFact1();
    rangeFact2(5);

    return 0;
}
