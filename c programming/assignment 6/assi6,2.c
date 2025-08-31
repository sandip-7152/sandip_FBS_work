#include <stdio.h>

struct Time {
    int hrs, min, sec;
};

// Utility: Add two times
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time sum;
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + sum.sec / 60;
    sum.sec %= 60;
    sum.hrs = t1.hrs + t2.hrs + sum.min / 60;
    sum.min %= 60;
    return sum;
}

int convertToSec(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

// 1. Without parameter, without return type
void displayTime1() {
    struct Time t;
    printf("\nEnter hrs min sec: ");
    scanf("%d%d%d", &t.hrs, &t.min, &t.sec);
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

// 2. With parameter, without return type
void displayTime2(struct Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

// 3. Without parameter, with return type
struct Time displayTime3() {
    struct Time t;
    printf("\nEnter hrs min sec: ");
    scanf("%d%d%d", &t.hrs, &t.min, &t.sec);
    return t;
}

// 4. With parameter, with return type
struct Time displayTime4(struct Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
    return t;
}

int main() {
    struct Time t1, t2, sum;
    // Type 1
    displayTime1();

    // Type 2
    printf("\nEnter t1: ");
    scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);
    displayTime2(t1);

    // Type 3
    t2 = displayTime3();
    displayTime2(t2);

    // Addition + Convert
    sum = addTime(t1, t2);
    printf("Added Time: %02d:%02d:%02d\n", sum.hrs, sum.min, sum.sec);
    printf("Time in Seconds: %d\n", convertToSec(sum));

    // Type 4
    displayTime4(sum);

    return 0;
}
