#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<string, int>> jedi)
{
    cout << jedi.size() << endl;
    for (int i = 0; i < jedi.size(); i++)
    {
        cout << jedi[i].first << " " << jedi[i].second << endl;
    }
}

int main()
{
    vector<pair<string, int>> jedi;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string x;
        int y;
        cin >> x >> y;

        jedi.push_back(make_pair(x, y));
    }

    printVector(jedi);

    return 0;
}