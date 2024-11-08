#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int z = 10;
    int count = 0;
    while(a != b){
        if (a < b){
            if (a + z <= b){
                a += z;
                count++;
            }
            else {
                z--;
            }
        }
        else if (a > b){
            if (a - z >= b){
                a -= z;
                count++;
            }
            else {
                z--;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
