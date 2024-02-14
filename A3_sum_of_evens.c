#include <stdio.h>

int main()
{

    int N, sum = 0, i;

    // Let us take the input from the user first

    printf("Enter the N value:");
    scanf("%d", &N);

    // Here I've considered N as inclusive. So, N will also be considered if it is even.
    for (i = 1; i <= N; i++)
    {

        // let us use an if statement to consider only the even numbers. (i%2 ==0 is true only when i is even.)
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    // I used an if else to give the output more clearly.
    if (N % 2 == 0)
    {
        printf("The sum of even numbers between 1 and %d (%d included) is : %d", N, N, sum);
    }
    else
    {
        printf("The sum of even numbers between 1 and %d is : %d", N, sum);
    }
    return 0;
}