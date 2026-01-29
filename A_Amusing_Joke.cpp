#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest, host, pile;
    cin >> guest >> host >> pile;

    vector<int> freq(26, 0);

    for (char c : guest)
        freq[c - 'A']++;

    for (char c : host)
        freq[c - 'A']++;

    // Subtract letters from pile
    for (char c : pile)
        freq[c - 'A']--;

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
