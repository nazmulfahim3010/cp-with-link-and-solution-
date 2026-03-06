#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++)
    {
        double AB, AC, BC, r;
        cin >> AB >> AC >> BC >> r;

        double k = sqrt(r / (1.0 + r));
        double AD = AB * k;

        cout << fixed << setprecision(10);
        cout << "Case " << tc << ": " << AD << "\n";
    }

    return 0;
}