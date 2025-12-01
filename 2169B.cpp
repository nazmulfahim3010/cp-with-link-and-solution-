#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        for (int i = 0; x[i] != '\0'; i++)
        {
            if (x[i] == '*')
            {
                cout << -1 << endl;
            }
        }
    }
}