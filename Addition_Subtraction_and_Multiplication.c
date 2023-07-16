#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long sum = a + b;
    long long sub = a - b;
    long long mul = a * b;

    printf("%lld + %lld = %lld\n", a, b, sum);
    printf("%lld - %lld = %lld\n", a, b, sub);
    printf("%lld x %lld = %lld\n", a, b, mul);
}