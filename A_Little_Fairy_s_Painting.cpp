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
        set<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }

        int dist_c = a.size();

        if (a.find(dist_c) != a.end())
        {
            cout << dist_c << '\n';
        }
        else
        {
            int cur = dist_c;
            while (true)
            {
                if (a.find(cur) != a.end())
                {
                    cout << cur << '\n';
                    break;
                }
                else
                {
                    a.insert(cur);
                    cur++;
                }
            }
        }
    }
    return 0;
}
