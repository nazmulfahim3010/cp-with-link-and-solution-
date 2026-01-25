#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // leftmost maximum
    int max_index = max_element(v.begin(), v.end()) - v.begin();

    // rightmost minimum
    int mn = *min_element(v.begin(), v.end());
    int min_index;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == mn)
        {
            min_index = i;
            break;
        }
    }

    int ans = max_index + (n - 1 - min_index);

    if (max_index > min_index)
        ans--;

    cout << ans << endl;
}
