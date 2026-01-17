#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool is_done = true;
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        int c = 0; // red
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, c});
            c ^= 1;
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i].second == a[i + 1].second)
            {
                cout << "NO" << endl;
                is_done = false;
                break;
            }
        }
        if (is_done)
        {
            cout << "YES" << endl;
        }
    }
}