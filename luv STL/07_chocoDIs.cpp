#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Show(int N, int Arr[])
{
  for (int i = 0; i < N; ++i)
    cout << Arr[i] << " ";
}

int main()
{
  int N, n;
  cin >> N;
  int Arr[N];

  int s;
  cin >> s;

  for (int i = 0; i < N; i++)
  {
    cin >> Arr[i];
  }

  sort(Arr, Arr + N);
  // Show(N, Arr);
  vector<int> ans;
  // cout << endl;
  for (int i = 0; i < N - s; i++)
  {
    ans.push_back(Arr[s - 1 + i] - Arr[i]);
  }

  cout << *min_element(ans.begin(), ans.end()) << endl;

  return 0;
}