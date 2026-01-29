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

        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        vector<int> sufMax(n), pos(n);
        sufMax[n - 1] = p[n - 1];
        pos[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (p[i] > sufMax[i + 1])
            {
                sufMax[i] = p[i];
                pos[i] = i;
            }
            else
            {
                sufMax[i] = sufMax[i + 1];
                pos[i] = pos[i + 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (p[i] != sufMax[i])
            {
                reverse(p.begin() + i, p.begin() + pos[i] + 1);
                break;
            }
        }

        for (int x : p)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
