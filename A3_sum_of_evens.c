#include <stdio.h>

int main()
{

    int N, sum = 0, i;

    // Let us take the input from the user first

    printf("Enter a positive integer N:");
    scanf("%d", &N);

    // validating N value. It cannot be negative.
    if (N < 1)
    {
        printf("Please enter a positive number");
        return 1; // to indicate that there  is an error and to terminate the program.
    }

    // Here I've considered N as inclusive. So, N will also be considered if it is even.
    for (i = 2; i <= N; i = i + 2)
    {
        // let us add each iteration value to the 'sum' variable
        sum += i;
    }
    printf("The sum of even numbers between 1 and %d is : %d", N, sum);

    return 0;
}