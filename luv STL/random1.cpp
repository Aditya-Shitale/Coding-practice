#include <bits/stdc++.h>
using namespace std;
void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}
  vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> temp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(nums[i]+nums[j]==target){
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
    return temp;
    }
int main()
{
    file();
    int N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin>>nums[i];
    }
    
    int target;
    cin>>target;

twoSum(nums,target);


    return 0;
}