#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long p1 = (a * a) + (3LL * a) + (2LL * b);
    long long p2 = 2LL * (a * b);
    long long p3 = b * b;

    long long x = p1 - p2 + p3;
    printf("%lld\n", x);
}