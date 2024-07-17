//AUTHOR: YOGESH S 1GA22AI063
//DATE:4/07/2024 11:30AM
//MODIFIED DATE: 4/07/2024
/*
START CODE
------------------------------------------
*/
#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%d ", first);
    printf("%d ", second);

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}
/*
END CODE
------------------------------------------
*/
