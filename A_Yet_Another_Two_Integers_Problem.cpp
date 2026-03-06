// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         if (a == b)
//         {
//             cout << 0 << endl;
//             continue;
//         }

//         int max_a = max(a, b);
//         int min_a = min(a, b);
//         int count = 0;

//         while (max_a > min_a)
//         {
//             min_a += 10;
//             count++;
//         }

//         cout << count << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int moves = (diff + 9) / 10;

        cout << moves << endl;
    }
}