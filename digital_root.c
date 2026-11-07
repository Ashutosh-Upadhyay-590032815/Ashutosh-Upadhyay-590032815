#include <stdio.h>

int digitalRoot(int n)
{
    static int count = 0;

    if (n < 10)
    {
        printf("Recursive calls = %d\n", count);
        return n;
    }

    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    count++;
    return digitalRoot(sum);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digital Root = %d\n", digitalRoot(n));

    return 0;
}
