#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string p;
        cin >> p;
        string pos[2];
        pos[0] = p[0]; // row d
        pos[1] = p[1]; // column 5

        char row[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        int column[8] = {1, 2, 3, 4, 5, 6, 7, 8};

        vector<char> new_row;
        vector<int> new_column;

        for (int j = 0; j < 8; j++)
        {
            if (row[j] == pos[0][0])
            {
                continue;
            }
            else
            {
                new_row.push_back(row[j]);
            }
        }
        for (int j = 0; j < 8; j++)
        {
            if (column[j] == pos[1][0] - '0')
            {
                continue;
            }
            else
            {
                new_column.push_back(column[j]);
            }
        }
        // total by row
        for (int j = 0; j < 7; j++){
            cout << pos[0] << new_column[j] << endl;
        }
        for (int j = 0; j < 7; j++){
            cout << new_row[j] << pos[1] << endl;
        }
    }
}