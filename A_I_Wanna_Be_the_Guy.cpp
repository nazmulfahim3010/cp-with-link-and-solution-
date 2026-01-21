#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> can(n + 1, false);

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        can[x] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        can[x] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!can[i])
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }

    cout << "I become the guy.\n";
    return 0;
}
