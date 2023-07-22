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

void solve()
{
    int N;
    vector<int> q;
    scanf("%d", &N);
    q.resize(N);
    int first = -1, second = -2;
    for (int i = 0, tmp; i < N; i++)
    {
        scanf("%d", &tmp);
        q[i] = tmp;
        if (tmp >= first)
        {
            second = first;
            first = tmp;
        }
        else if (tmp >= second)
        {
            second = tmp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (first == q[i])
        {
            printf("%d ", q[i] - second);
        }
        else
        {
            printf("%d ", q[i] - first);
        }
    }
    printf("\n");
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