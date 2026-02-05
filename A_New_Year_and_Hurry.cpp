#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int time = 240;
    int x = 0;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        x += i * 5;
        if (x + t <= time)
        {
            result = i;
        }
        else
        {
            break;
        }
    }

    cout << result << '\n';
}