// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         vector<int> v;
//         set<int> a;

//         cin >> n;
//         for (int i = 0; i < n; i++)

//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }

//         int mini = *min_element(v.begin(), v.end());
//         mini *= -1;

//         for (int i = 0; i < n; i++)
//         {
//             a.insert(v[i] + mini);
//         }

//         int mex = 0;
//         for (int x : a)
//         {
//             if (x == mex)
//                 mex++;
//             else if (x > mex)
//                 break;
//         }

//         cout << mex << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int v : a)
        {
            unordered_set<long long> s;

            for (int x : a)
            {
                long long y = (long long)x - v;
                if (y >= 0)
                {
                    s.insert(y);
                }
            }

            int mex = 0;
            while (s.count(mex))
            {
                mex++;
            }

            ans = max(ans, mex);
        }

        cout << ans << "\n";
    }

    return 0;
}
