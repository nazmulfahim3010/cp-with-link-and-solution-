#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count_even = 0, count_odd = 0;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            if (x[i] % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }

        if (count_even == x.size() || count_odd == x.size())
        {
            for (int i = 0; i < n; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(x.begin(), x.end());
            for (int i = 0; i < n; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}