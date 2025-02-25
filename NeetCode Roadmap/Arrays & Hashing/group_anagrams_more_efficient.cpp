#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map<string,vector<string>>mp;
            vector<vector<string>> output;
            int len = strs.size();

            for (int i=0; i<len; i++){
                string word = strs[i];
                sort(word.begin(),word.end());
                mp[word].push_back(strs[i]);
            }
            for(auto it = mp.begin();it!=mp.end();it++){
                output.push_back(it->second);
            }
            return output;
        }
};
int main(){
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = s.groupAnagrams(strs);
    for(auto x: res){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}