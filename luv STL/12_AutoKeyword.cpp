#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.begin(); it < vec.end(); it++)
    {
        cout << *it << " " << endl;
    }
 
    vector<pair<int, int>> vec_pr = {{1, 2}, {3, 4}, {5, 6}};
    for (auto &ptr : vec_pr) 
    {
        cout << ptr.first << " " << ptr.second << " " << endl;
    }
    return 0;
}