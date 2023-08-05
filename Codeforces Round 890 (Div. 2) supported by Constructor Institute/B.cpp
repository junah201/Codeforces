/* Code By [ junah ]
GitHub : [ junah201 ] */
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define int long long int
#define INF LONG_LONG_MAX

int N;
vector<int> A;
bool ans = false;

void dfs(int idx, int sum)
{
    if (ans)
        return;
    if (idx == N)
    {
        if (sum == 0)
            ans = true;
        return;
    }
    if (sum == 0)
        return;

    if (idx == N - 1)
    {
        if (A[idx] == sum)
        {
            return;
        }
        if (sum == 0)
            return;
        dfs(idx + 1, 0);
        return;
    }

    for (int i = 1; i <= sum; i++)
    {
        if (A[idx] == i)
            continue;
        dfs(idx + 1, sum - i);
        if (ans)
            return;
    }
}

bool solve()
{
    scanf("%lld", &N);
    A.resize(0);
    A.resize(N);
    int A_sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        A_sum += A[i];
    }

    ans = false;
    dfs(0, A_sum);

    return ans;
}

signed main()
{
    int T;
    scanf("%lld", &T);
    while (T--)
    {
        if (solve())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}