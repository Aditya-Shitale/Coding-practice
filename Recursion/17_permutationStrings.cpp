#include<bits/stdc++.h>
using namespace std;


void solve(vector<string> &ans,int index,string str){
if(index>=str.size()){
    ans.push_back(str);
    return ;
}
for(int j=index;j<str.size();j++){
    swap(str[index],str[j]);
    solve(ans,index+1,str);
    //backtrack
        swap(str[index],str[j]);

}
}

vector<string> generatePermutations(string str){
vector<string> ans;
int index=0;

solve(ans,index,str);
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }
return ans;
}


int main(){
    string str="abc";
   vector<string> vec= generatePermutations(str);
   sort(vec.begin(),vec.end());
   for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
   }
    return 0;
}