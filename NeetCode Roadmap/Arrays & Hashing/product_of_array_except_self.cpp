#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int len = nums.size();
            vector<int>ans(len,1);
            int cur = 1;
            
            for(int i=0;i<len;i++){
                ans[i] *= cur;
                cur *= nums[i];
            }
            cur = 1;
            for(int i=len-1 ; i>=0 ; i--){
                ans[i] *= cur;
                cur *= nums[i];
            }

            return ans;
        }
};
int main(){}