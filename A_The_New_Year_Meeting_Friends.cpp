#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> v = {x1, x2, x3};

    int maxx = *max_element(v.begin(), v.end());
    int minn = *min_element(v.begin(), v.end());

    cout << maxx - minn << endl;
    return 0;
}