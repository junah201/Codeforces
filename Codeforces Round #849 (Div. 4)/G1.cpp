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

int N, T, C;

int solve()
{
    scanf("%d %d", &N, &C);
    vector<int> A;
    for (int i = 0, tmp; i < N; i++)
    {
        scanf("%d", &tmp);
        A.emplace_back(tmp + i + 1);
    }
    sort(A.begin(), A.end());

    int ans = 0;
    for (auto i : A)
    {
        if (i <= C)
        {
            C -= i;
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main()
{
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        printf("%d\n", solve());
    }

    return 0;
}