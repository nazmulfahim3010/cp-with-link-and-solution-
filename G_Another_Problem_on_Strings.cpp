#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k;
    cin >> k;

    string s;
    cin >> s;

    long long n = s.size();
    vector<long long> freq(n + 1, 0);

    long long prefix = 0;
    long long ans = 0;

    freq[0] = 1;

    for (char c : s)
    {
        if (c == '1')
            prefix++;

        if (prefix >= k)
            ans += freq[prefix - k];

        freq[prefix]++;
    }

    cout << ans << "\n";

    return 0;
}