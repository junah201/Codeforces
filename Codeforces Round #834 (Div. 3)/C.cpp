/* Code By [ junah ]
GitHub : [ junah201 ] */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) (v).begin(), (v).end()

int T;

int bfs(int l, int r, int x, int a, int b)
{
    queue<pair<int, int>> q;
    q.push({l, a});
    while (!q.empty())
    {
        auto [cur, cnt] = q.front();
        q.pop();
        if (cur == r)
            return cnt;
        if (cur + x <= b)
            q.push({cur + x, cnt + 1});
        if (cur - x >= a)
            q.push({cur - x, cnt + 1});
    }
    return -1;
}

int main()
{
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int l, r, x;
        scanf("%d %d %d", &l, &r, &x);
        int a, b;
        scanf("%d %d", &a, &b);
    }

    return 0;
}