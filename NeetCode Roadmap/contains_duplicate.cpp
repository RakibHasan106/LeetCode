#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            map<int,int>counts;
            int n = nums.size();
            for(int i=0 ; i<n ; i++){
                counts[nums[i]]++;
                if(counts[nums[i]]>1){
                    return true;
                }
            }
            return false;
        }
};
int main(){
    Solution sol;
    vector<int> nums;
    nums = {1,2,3,4,4};
    cout<<sol.containsDuplicate(nums)<<endl;
    return 0;
}