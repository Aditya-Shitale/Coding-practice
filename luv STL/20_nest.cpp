#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<int, multiset<string>> m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string x;
        int y;
        cin >> x >> y;
        m[y].insert(x);
        ;
    }
    auto cit = --m.end();
    while (true)
    {
        auto &test = (*cit).second;
        int y = (*cit).first;
        for (auto tests : test)
        {
            cout << tests << " " << y << endl;
        }
        if (cit == m.begin())
            break;
        cit--;
    }

    return 0;
}