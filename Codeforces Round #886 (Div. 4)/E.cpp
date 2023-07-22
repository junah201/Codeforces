/* Code By [ junah ]
GitHub : [ junah201 ] */
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define int long long int
#define INF LONG_LONG_MAX

void dprintf(const char *__format, ...)
{
#ifndef ONLINE_JUDGE
    va_list args;
    va_start(args, __format);
    vprintf(__format, args);
    va_end(args);
#endif
}

int T;

int get_sum(vector<int> &S, int add)
{
    int result = 0;
    for (auto i : S)
    {
        if (i + add < 0)
            return -1;
        int tmp = (i + add) * (i + add);
        if (tmp)
            return -1;
        result += tmp;
        if (result < 0)
            return -1;
        printf("%lld ", (i + add) * (i + add));
    }
    printf("\n");
    return result;
}

int solve()
{
    int N, C;
    scanf("%lld %lld", &N, &C);

    vector<int> S(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &S[i]);
    }

    int low = 0;
    int high = LONG_LONG_MAX - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        int sum = get_sum(S, mid * 2);
        printf("2mid: %lld\n", mid * 2);

        printf("low:%lld mid:%lld high:%lld, sum:%lld\n", low, mid, high, sum);

        if (sum < 0 || sum > C)
        {
            high = mid - 1;
        }
        else if (sum < C)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

signed main()
{
    scanf("%lld", &T);
    while (T--)
    {
        printf("%lld\n", solve());
        return 0;
    }
    return 0;
}