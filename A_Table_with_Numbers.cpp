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
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n);

        int countR = 0, countC = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= h)
                countR++;
            if (a[i] <= l)
                countC++;
        }

        int maxPairs = min(n / 2, min(countR, countC));

        cout << maxPairs << "\n";
    }

    return 0;
}