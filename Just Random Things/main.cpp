#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int ans = 1;

    while ((k*ans)%10 != r){
        if ((k*ans)%10 == 0){
            break;
        }
        else{
            ans++;
        }
    }
    cout << ans;
}