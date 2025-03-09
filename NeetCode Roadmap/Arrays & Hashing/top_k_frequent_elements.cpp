#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int,int>mp;
            int len = nums.size();
            for(int i=0;i<len;i++){
                mp[nums[i]]++;
            }
            vector<pair<int,int>> sortVec(mp.begin(),mp.end());

            sort(sortVec.begin(),sortVec.end(),[](const auto& a,const auto& b){
                return a.second>b.second;
            });

            vector<int>output;
            for(int i=0;i<k;i++){
                output.push_back(sortVec[i].first);
            }
            
            return output;
        }
};

int main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> output = s.topKFrequent(nums,k);
    for(int i : output){
        cout<<i<<endl;
    }
    return 0;
}