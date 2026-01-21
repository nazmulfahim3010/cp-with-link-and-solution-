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
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (freq[i] != 0)
                v.push_back(freq[i]);
        }

        sort(v.begin(), v.end());

        int ans = 0;
        int a = v.size();

        for (int i = 0; i < a; i++)
        {
            ans = max(ans, v[i] * (a - i));
        }

        cout << ans << '\n';
    }
}
