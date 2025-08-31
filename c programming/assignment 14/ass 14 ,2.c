#include <stdio.h>

struct Time {
    int hrs, min, sec;
};

// function to add two times
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time sum;

    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + sum.sec / 60;
    sum.sec = sum.sec % 60;

    sum.hrs = t1.hrs + t2.hrs + sum.min / 60;
    sum.min = sum.min % 60;

    return sum;
}

// function to convert time into total seconds
int toSeconds(struct Time t) {
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

int main() {
    struct Time t1, t2, result;

    printf("Enter 1st time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter 2nd time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    printf("\n--- Time Entered ---\n");
    printf("Time 1: %02d:%02d:%02d\n", t1.hrs, t1.min, t1.sec);
    printf("Time 2: %02d:%02d:%02d\n", t2.hrs, t2.min, t2.sec);

    result = addTime(t1, t2);

    printf("\n--- Addition Result ---\n");
    printf("Sum    : %02d:%02d:%02d\n", result.hrs, result.min, result.sec);

    printf("\n--- Time in Seconds ---\n");
    printf("Time 1 in sec: %d\n", toSeconds(t1));
    printf("Time 2 in sec: %d\n", toSeconds(t2));
    printf("Sum   in sec: %d\n", toSeconds(result));

    return 0;
}
