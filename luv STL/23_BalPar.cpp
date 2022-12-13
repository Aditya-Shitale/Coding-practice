#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};

string isBalanced(string s)
{
    stack<char> st;
    for (auto brackets : s)
    {
        if (symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
            if (st.empty())
                return "No";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[brackets] != 0)
            {
                return "No";
            }
        }
    }
    if(st.empty()) return "Yes";
    return "No";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }

    return 0;
}