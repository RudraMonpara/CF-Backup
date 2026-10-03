#include <iostream>
using namespace std;

int main()
{
    int x;
    string c;
    cin >> x >> c;

    int count = 0;
    for (int i = 0; i < c.length() - 1; i++)
    {
        if (c[i] == c[i + 1])
            count++;
        else
            continue;
    }
    cout << count;
    return 0;
}
