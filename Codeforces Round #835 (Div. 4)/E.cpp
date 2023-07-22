/* Code By [ junah ]
GitHub : [ junah201 ] */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) (v).begin(), (v).end()

void dprintf(const char *__format, ...)
{
#ifndef ONLINE_JUDGE
    printf(__format);
#endif
}

int T;

ll solve()
{
    int N, tmp;
    ll ans1 = 0, ans2 = 0, ans3 = 0;
    scanf("%d", &N);
    vector<int> DP, inp(N);

    int first_zero_idx = INT_MAX;
    int last_one_idx = -1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &inp[i]);
        if (inp[i] == 0)
        {
            first_zero_idx = min(first_zero_idx, i);
        }
        if (inp[i] == 1)
        {
            last_one_idx = i;
        }
    }

    DP.resize(N, 0);
    DP[0] = inp[0];
    for (int i = 1; i < N; i++)
    {
        DP[i] = DP[i - 1];
        if (inp[i] == 1)
            DP[i] += 1;
        else
            ans1 += DP[i - 1];
    }

    if (first_zero_idx != INT_MAX)
    {

        DP.resize(N, 0);
        inp[first_zero_idx] = 1;
        DP[0] = inp[0];
        for (int i = 1; i < N; i++)
        {
            DP[i] = DP[i - 1];
            if (inp[i] == 1)
                DP[i] += 1;
            else
                ans2 += DP[i];
        }
        inp[first_zero_idx] = 0;
    }

    if (last_one_idx != -1)
    {
        DP.resize(N, 0);
        inp[last_one_idx] = 0;
        DP[0] = inp[0];
        for (int i = 1; i < N; i++)
        {
            DP[i] = DP[i - 1];
            if (inp[i] == 1)
                DP[i] += 1;
            else
                ans3 += DP[i];
        }
    }

    return max(ans1, max(ans2, ans3));
}

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        printf("%lld\n", solve());
    }

    return 0;
}