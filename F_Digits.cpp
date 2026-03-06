#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;

    while (cin >> x)
    {
        if (x == "END")
            break;

        if (x == "0")
        {
            cout << 1 << endl;
            continue;
        }

        int count = 1;
        string prev = x;
        string curr = to_string(prev.length());

        while (curr != prev)
        {
            prev = curr;
            curr = to_string(prev.length());
            count++;
        }

        cout << count << endl;
    }

    return 0;
}