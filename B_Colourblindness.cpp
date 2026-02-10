#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x;
        string y;
        cin >> x >> y;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (x[i] == y[i])
                continue;
            if ((x[i] == 'B' && y[i] == 'G') || (x[i] == 'G' && y[i] == 'B'))
                continue;

            ok = false;
            break;
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}