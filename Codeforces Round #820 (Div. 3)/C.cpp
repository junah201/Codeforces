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

int N;
char input[2 * 10 * 10 * 10 * 10 * 10 + 2];

int idx(int a)
{
    return a - 'a' + 1;
}

void solve()
{
    scanf("%s", input);
    int len = strlen(input);
    vector<vector<int>> v(30);
    for (int i = 1; i < len - 1; i++)
        v[idx(input[i])].push_back(i + 1);
    vector<int> ans(0);
    if (input[0] > input[len - 1])
    {
        for (int i = idx(input[0]); i >= idx(input[len - 1]); i--)
            for (auto j : v[i])
                ans.push_back(j);
    }
    else
    {
        for (int i = idx(input[0]); i <= idx(input[len - 1]); i++)
            for (auto j : v[i])
                ans.push_back(j);
    }
    printf("%d %d\n", abs(input[len - 1] - input[0]), ans.size() + 2);
    printf("%d ", 1);
    for (auto i : ans)
        printf("%d ", i);
    printf("%d\n", len);
}

int main()
{
    scanf("%d", &N);
    while (N--)
    {
        solve();
    }
    return 0;
}