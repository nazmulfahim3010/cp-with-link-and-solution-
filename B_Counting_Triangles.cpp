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
        int N;
        cin >> N;

        vector<long long> a(N);
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long countTriangles = 0;

        for (int k = N - 1; k >= 2; k--)
        {
            int left = 0;
            int right = k - 1;

            while (left < right)
            {
                if (a[left] + a[right] > a[k])
                {
                    countTriangles += (right - left);
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }

        cout << "Case " << tc << ": " << countTriangles << "\n";
    }

    return 0;
}