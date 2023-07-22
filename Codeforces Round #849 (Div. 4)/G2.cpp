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
    vector<pair<int, int>> DP;
    vector<pair<int, int>> A;
    for (int i = 0, tmp; i < N; i++)
    {
        scanf("%d", &tmp);
        A.emplace_back(tmp + min(i + 1, N - i), i);
        DP.emplace_back(tmp + i + 1, i);
    }
    sort(A.begin(), A.end());
    sort(DP.begin(), DP.end());
    int ans = 0;
    int tmp_ans = 0;
    int use_idx = 0;
    int tmp_C = C;
    vector<pair<int, int>> tmp_list;

    for (int i = 0; i < 100; i++)
    {
        if (N >= i + 1)
        {
            tmp_list.emplace_back(DP[i].second, DP[i].first);
        }
        else
        {
            break;
        }
    }

    for (auto [use_idx, use_value] : tmp_list)
    {
        tmp_C = C;
        tmp_ans = 0;
        if (use_value <= tmp_C)
        {
            tmp_C -= use_value;
            tmp_ans++;
        }
        else
        {
            ans = max(ans, tmp_ans);
            continue;
        }

        for (auto [i, idx] : A)
        {
            if (idx == use_idx)
            {
                continue;
            }
            if (i <= tmp_C)
            {
                tmp_C -= i;
                tmp_ans++;
            }
            else
            {
                break;
            }
        }
        ans = max(ans, tmp_ans);
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