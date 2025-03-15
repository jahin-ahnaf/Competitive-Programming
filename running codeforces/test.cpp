#include<bits/stdc++.h>
using namespace std;
using ll = long long;

template<typename T>

void asirprint(vector<T> &v) {
    int n = v.size();
    for (int i = 0; i < n; i++) cout << v[i] << ' ';
    cout << endl;
}

ll gcd(ll  a, ll  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve() {
    ll n;
    cin >> n;
    pair<int,int> ans;
    ll mn = LONG_MAX;
    for (ll i=1;i<=sqrt(n);i++) {
        if (n%i == 0) {
            if (max(i,n/i)<mn && lcm(i,n/i) == n) {
                mn = max(i,n/i);
                ans = {i,n/i};
            }
        }
    }
    cout<<ans.first<<' '<<ans.second<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) solve();
    // for (int i=1;i<=t;i++) {cout<<"Case "<<i<<": "; solve();}
}