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

int T, N, x;

int solve()
{
    scanf("%d", &N);
    if (N == 1)
        return true;

    vector<pair<int, int>> inp;
    while (N--)
    {
        scanf("%d", &x);
    }

    return 1;
    sort(inp.begin(), inp.end());
    if (inp[N - 1].first > 0 && inp[N - 1].first < N - 1)
        return 0;

    return 1;
}

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        if (solve())
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}