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

int T, N;

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        stack<int> s;
        stack<char> ans;
        for (int i = 0, tmp; i < N; i++)
        {
            scanf("%1d", &tmp);
            s.push(tmp);
        }
        while (!s.empty())
        {
            int now = s.top();
            s.pop();

            if (now != 0)
                ans.push(now + 'a' - 1);
            else
            {
                int tmp1 = s.top();
                s.pop();
                int tmp2 = s.top();
                s.pop();
                int tmp = tmp2 * 10 + tmp1;
                ans.push(tmp + 'a' - 1);
            }
        }
        while (!ans.empty())
        {
            printf("%c", ans.top());
            ans.pop();
        }
        printf("\n");
    }

    return 0;
}
