#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<string>strs_2 = strs;
            vector<vector<string>> output;
            int len = strs_2.size();
            for (int i=0;i<len;i++){
                sort(strs_2[i].begin(),strs_2[i].end());
            }
            
            vector<string> temp;
            int k;
            for(int i = 0 ; i<strs_2.size(); i++){
                temp.clear();
                temp.push_back(strs[i]);
                for(int j=i+1; j<strs_2.size(); j++){
                    if(strs_2[i]==strs_2[j]){
                        temp.push_back(strs[j]);
                        strs.erase(strs.begin()+j);
                        strs_2.erase(strs_2.begin()+j);
                        j--;
                    }
                }
                
                output.push_back(temp);
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