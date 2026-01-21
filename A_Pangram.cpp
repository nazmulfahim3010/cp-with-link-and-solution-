#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    cin >> s;

    if (t < 26)
    {
        cout << "NO\n";
        return 0;
    }

    vector<bool> v(26, false);

    for (int i = 0; i < t; i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            v[ch - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!v[i])
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
