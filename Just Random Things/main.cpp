#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    int ans = 0;
    cin >> t;
    int b[t];
    int count = -1;

    int i = 0;
    while (i < t)
    {
        cin >> a;

        for (int i = 0; i < a; i++)
        {
            cin >> b[i];
        }
        sort ((b), b + a);
        for (int i = 0; i < a; i++){
            if (b[i] == b[i + 1] && b[i + 1] == b[i + 2] && b[i + 2] == b[i]){
                ans = b[i];
                continue;
            }
        }
        cout << ans << endl;
        i++;
    }
}
