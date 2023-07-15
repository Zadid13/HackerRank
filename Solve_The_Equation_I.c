#include <stdio.h>
int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long p1 = (a * a * a * a) + (3LL * a * c);
    long long p2 = 4LL * (b * b) * c;
    long long p3 = c * c;

    long long ans = (p1 * p1) + p2 + p3;
    printf("%lld\n", ans);
}