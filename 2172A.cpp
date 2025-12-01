#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());

    if (max - min >= 10)
    {
        cout << "check again";
        return 0;
    }
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if ((a[i] == max || a[i] == min) && count != 2)
        {
            count++;
            a[i] = -1;
        }
    }
    int num;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] != -1)
        {
            num = a[i];
        }
    }

    cout << "final " << num << endl;
}