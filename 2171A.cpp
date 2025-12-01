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

        if (n % 2 == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        int S = n / 2;
        int ways = S / 2 + 1;

        cout << ways << "\n";
    }
    return 0;
}
