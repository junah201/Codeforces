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

int T, N, Q;
int get_DP[100000000];

int get(int x)
{
    int result = 0;
    int tmp_x = x;
    if (x < 100000000)
    {
        if (get_DP[x])
            return get_DP[x];
        while (tmp_x)
        {
            result += tmp_x % 10;
            tmp_x = tmp_x / 10;
        }
        return get_DP[x] = result;
    }
    while (tmp_x)
    {
        result += tmp_x % 10;
        tmp_x = tmp_x / 10;
    }
    return result;
}

void solve()
{
    scanf("%d %d", &N, &Q);
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        A.emplace_back(tmp);
    }
    vector<int> DP;
    DP.resize(N + 2, 0);
    for (int i = 0; i < Q; i++)
    {
        int type;
        scanf("%d", &type);
        if (type == 1)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            for (int i = l - 1; i <= r - 1; i++)
            {
                DP[i]++;
            }
        }
        else
        {
            int x;
            scanf("%d", &x);
            while (DP[x - 1] != 0)
            {
                A[x - 1] = get(A[x - 1]);
                DP[x - 1]--;
            }
            printf("%d\n", A[x - 1]);
        }
    }
}

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }

    return 0;
}