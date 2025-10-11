#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        bool ok = true;
        for (int i = 0; i < 31; i++) {
            int xb = (x >> i) & 1;
            int yb = (y >> i) & 1;
            int zb = (z >> i) & 1;d

            // invalid combination if not one of allowed 5 patterns
            if (!(
                (xb==0 && yb==0 && zb==0) ||
                (xb==0 && yb==1 && zb==0) ||
                (xb==0 && yb==0 && zb==1) ||
                (xb==1 && yb==0 && zb==0) ||
                (xb==1 && yb==1 && zb==1)
            )) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
