#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i];
        }

        cout << "Case " << tc << ":\n";

        while (q--)
        {
            long long A, B;
            cin >> A >> B;

            // First element >= A
            auto left = lower_bound(points.begin(), points.end(), A);

            // First element > B
            auto right = upper_bound(points.begin(), points.end(), B);

            cout << (right - left) << "\n";
        }
    }

    return 0;
}