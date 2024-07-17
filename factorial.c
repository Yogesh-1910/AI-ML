//AUTHOR: YOGESH S 1GA22AI063
//DATE:4/07/2024 11:30AM
//MODIFIED DATE: 4/07/2024
/*
START CODE
------------------------------------------
*/
#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep function

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    unsigned long long fact;
    clock_t start, end;
    double cpu_time_used;
    time_t rawtime;
    struct tm * timeinfo;

    // Get current time
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("Factorial Calculation started at: %s", asctime(timeinfo));
    printf("Enter a number: ");
    scanf("%d", &number);

    start = clock(); // Start the clock

    // Fake delay
    printf("Calculating factorial...\n");
    sleep(2); // Delay for 2 seconds

    fact = factorial(number);

    // Another fake delay
    printf("Calculating final result...\n");
    sleep(1); // Delay for 1 second

    end = clock(); // Stop the clock

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Get current time again for end time
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("Factorial Calculation ended at: %s", asctime(timeinfo));
    printf("Factorial of %d is: %llu\n", number, fact);
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}


/*
END CODE
---------------------------------------
*/
