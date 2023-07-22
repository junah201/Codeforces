/* Code By [ junah ]
GitHub : [ junah201 ] */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) (v).begin(), (v).end()

int T, N;

ll solve()
{
    scanf("%d", &N);
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        A.emplace_back(tmp);
    }

    if (N == 1)
    {
        if (A[0] > 0)
            return A[0];
        return -A[0];
    }

    if (N == 2)
    {
        return max(A[0] + A[1], -A[0] - A[1]);
    }

    /*
    if (N == 3)
    {
        return max(A[0] - A[0 + 1] - A[0 + 2], max(-A[0] - A[0 + 1] + A[0 + 2], max(-A[0] - A[0 + 1] + A[0 + 2], -A[0] - A[0 + 1] + A[0 + 2])));
    }

    + - -
    - - +
    - + -
    + + +
    */

    for (int i = 0; i < N - 2; i++)
    {
        int tmp = max(A[i] - A[i + 1] - A[i + 2], -A[i] - A[i + 1] + A[i + 2]);
        tmp = max(tmp, -A[i] + A[i + 1] - A[i + 2]);
        tmp = max(tmp, A[i] + A[i + 1] + A[i + 2]);
        if (tmp == -A[i] - A[i + 1] + A[i + 2])
        {
            A[i] = -A[i];
            A[i + 1] = -A[i + 1];
        }
        else if (tmp == -A[i] + A[i + 1] + A[i + 2])
        {
            A[i] = -A[i];
            A[i + 1] = -A[i + 1];
            if (i == N - 3)
            {
                A[i + 1] = -A[i + 1];
                A[i + 2] = -A[i + 2];
            }
        }
        else if (i == N - 3 && tmp == A[i] - A[i + 1] - A[i + 2])
        {
            A[i + 1] = -A[i + 1];
            A[i + 2] = -A[i + 2];
        }
    }
    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += A[i];
        // printf("%d ", A[i]);
    }
    // printf("\n");
    return ans;
}

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        printf("%lld\n", solve());
    }
    return 0;
}