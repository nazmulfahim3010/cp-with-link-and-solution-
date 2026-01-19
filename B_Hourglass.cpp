#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long s, k, m;
        cin >> s >> k >> m;
        if (k >= s)
        {
            cout << max(0LL, s - (m % k)) << '\n';
        }
        else
        {
            int chance = m / k;
            if (chance % 2 == 0)
            {
                cout << max(0LL, s - (m % k)) << '\n';
            }
            else
            {
                cout << max(0LL, k - (m % k)) << '\n';
            }
        }
    }
}
