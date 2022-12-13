#include <iostream>
#include <stack>
using namespace std;

void InsertSort(stack<int> stack, int num)
{
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    // recursive call
    InsertSort(stack, num);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);

    InsertSort(stack, num);
}

int main()
{

    stack<int> s;

    s.push(5);
    s.push(6);
    s.push(9);
    s.push(12);
    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s.top() << endl;
        s.pop();
    }

    sortStack(s);

    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}