#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// By the name of Allah

int INF = INT_MAX;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> rectangle;
    vector<int> hs(q);
    vector<int> ws(q);
    vector<int> hb(q);
    vector<int> wb(q);
    int h, w;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> w;
        rectangle.push_back(make_pair(h, w));
    }
    for (int i = 0; i < q; i++)
        cin >> hs[i] >> ws[i] >> hb[i] >> wb[i];

    for (int i = 0; i < q; i++)
    {
        vector<int> areas;
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (hs[i] < rectangle[j].first && rectangle[j].first < hb[i] &&
                ws[i] < rectangle[j].second && rectangle[j].second < wb[i])

            {
                areas.push_back(rectangle[j].first * rectangle[j].second);
            }
            else
                continue;
        }
        for (auto &x : areas)
            sum += x;
        cout << sum << '\n';
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
