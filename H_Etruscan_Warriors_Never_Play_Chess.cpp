#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        unsigned long long n;
        cin >> n;

        long double x = sqrtl(1.0L + 8.0L * n);
        unsigned long long k = (unsigned long long)((x - 1) / 2);

        cout << k << "\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// using ull = unsigned long long;
// using i128 = __int128_t;

// ull maxRows(ull n)
// {
//     ull low = 0, high = 2000000000ULL; // safe upper bound (~2e9)
//     ull ans = 0;

//     while (low <= high)
//     {
//         ull mid = low + (high - low) / 2;

//         // Compute mid*(mid+1)/2 safely using 128-bit
//         i128 total = (i128)mid * (mid + 1) / 2;

//         if (total <= n)
//         {
//             ans = mid;     // mid is valid
//             low = mid + 1; // try to find bigger k
//         }
//         else
//         {
//             high = mid - 1; // mid too large
//         }
//     }

//     return ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         ull n;
//         cin >> n;
//         cout << maxRows(n) << "\n";
//     }

//     return 0;
// }