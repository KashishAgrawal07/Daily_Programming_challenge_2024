#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string ans = "";

        string first = strs[0] , last = strs[n-1];

        for(int i = 0; i < min(first.size(),last.size()); i++){

            if(first[i] != last[i]){
                return ans;
            }

            ans = ans + last[i];

        }

        return ans;
 }

 int main(){
    vector<string> strs = {"flower","flow","flight"};
    string ans = "";

    ans = longestCommonPrefix(strs);
    cout<<ans;

    return 0;
 }