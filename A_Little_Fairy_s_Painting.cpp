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

        unordered_set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long d = s.size();
        while (s.count(d))
        {
            d++;
        }

        cout << d << '\n';
    }
    return 0;
}
