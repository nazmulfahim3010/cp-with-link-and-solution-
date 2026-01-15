#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long ans = 0;

        for (int start = 0; start < 2; start++)
        {
            long long white = a, dark = b;
            long long size = 1;
            long long layers = 0;
            int color = start; // 0 = white, 1 = dark

            while (true)
            {
                if (color == 0)
                {
                    if (white < size)
                        break;
                    white -= size;
                }
                else
                {
                    if (dark < size)
                        break;
                    dark -= size;
                }
                layers++;
                size *= 2;
                color ^= 1;
            }

            ans = max(ans, layers);
        }

        cout << ans << "\n";
    }
    return 0;
}
