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
        int y, r;
        cin >> y >> r;
        int num = 0;
        num = ceil(y / 2);
        num += r;
        if (num <= n)
        {
            cout << num << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}