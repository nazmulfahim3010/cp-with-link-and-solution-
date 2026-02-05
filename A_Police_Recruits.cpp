#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0, answer = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1 && count == 0)
        {
            answer += 1;
        }
        else if (x == -1 && count > 0)
        {
            count -= 1;
        }
        else
        {
            count += x;
        }
    }
    cout << answer << endl;
    return 0;
}