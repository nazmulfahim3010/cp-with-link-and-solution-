#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max_index = max_element(v.begin(), v.end()) - v.begin();
    int min_index = min_element(v.begin(), v.end()) - v.begin();

    cout << (7 - (min_index + 1)) + (max_index + 1) << endl;
}