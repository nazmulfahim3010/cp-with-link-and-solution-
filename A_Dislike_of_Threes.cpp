#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int count = 0;
        int n = 1;

        while (count < k)
        {
            if (n % 3 != 0 && n % 10 != 3)
            {
                count++;
            }

            if (count == k)
            {
                cout << n << endl;
                break;
            }

            n++;
        }
    }
}