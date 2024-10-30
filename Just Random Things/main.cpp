#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int received = 0;
    int n, c;
    cin >> n >> c;
    int a[n];
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            count++;
            received = a[0];
        }
        else if (a[i] - received >= c)
        {
            count++;
            received = a[i];
        }
    }
    cout << count;
}