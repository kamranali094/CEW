#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
    void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error Enter Positive no.\n");
    } else {
        printf("Fibonacci series for %d : ", n);
        printFibonacciSeries(n);
    }

    return 0;
}
