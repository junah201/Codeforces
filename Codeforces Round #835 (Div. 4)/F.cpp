/* Code By [ junah ]
GitHub : [ junah201 ] */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) (v).begin(), (v).end()

int T, N, C, D, sum;
vector<int> coin;

int max_coin(int k)
{
    int result = 0;
    int day = D;
    if (day > k)
    {
        result += sum * (day / k);
    }
    day = day % k;
    for (int i = 0; i < day; i++)
        result += coin[i];

    return result;
}

void solve()
{
    scanf("%d %d %d", &N, &C, &D);
    coin.resize(N);
    sum = 0;
    for (int i = 0, tmp; i < N; i++)
    {
        sum += coin[i];
        scanf("%d", &coin[i]);
    }

    sort(coin.begin(), coin.end(), greater<int>());

    int start = 1, end = N, mid, cnt;
    while (start <= end)
    {
        mid = (start + end) / 2;
        cnt = max_coin(mid);

        if (cnt >= C)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    printf("%d\n", mid);
}

int main()
{
    scanf("%d", &T);
    while (T--)
        solve();

    return 0;
}