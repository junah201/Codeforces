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

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        int N;
        char inp[102];

        scanf("%d", &N);
        scanf("%s", inp);

        int ans = -1;

        for (int i = 0; i < N; i++)
        {
            ans = max(ans, (int)inp[i]);
        }
        printf("%d\n", ans - 'a' + 1);
    }

    return 0;
}