#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> h(N);
    for (int i = 0; i < N; i++)
        cin >> h[i];

    int Q;
    cin >> Q;

    while (Q--)
    {
        long long x;
        cin >> x;

        auto it1 = lower_bound(h.begin(), h.end(), x);
        auto it2 = upper_bound(h.begin(), h.end(), x);

        // shorter chimp
        if (it1 == h.begin())
            cout << "X ";
        else
            cout << *(it1 - 1) << " ";

        // taller chimp
        if (it2 == h.end())
            cout << "X\n";
        else
            cout << *it2 << "\n";
    }

    return 0;
}