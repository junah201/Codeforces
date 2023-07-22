/* Code By [ junah ]
GitHub : [ junah201 ] */
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define int long long int
#define INF LONG_LONG_MAX

int T;

int solve()
{
    int N;
    scanf("%lld", &N);

    vector<int> A(N);
    vector<int> ans(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (auto i : A)
    {
        for (int j = i; j <= N; j += i)
        {
            ans[j] += 1;
        }
    }

    int result = 0;
    for (auto i : ans)
    {
        result = max(result, i);
    }
    return result;
}

signed main()
{
    scanf("%lld", &T);
    while (T--)
    {
        printf("%lld\n", solve());
    }

    return 0;
}