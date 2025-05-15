#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1, mid, min = nums[0];
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]>nums[right]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
            if(nums[mid]<min){
                min = nums[mid];
            }
        }
        return min;
    }
};
int main(){
    Solution s;
    vector<int> nums = {10,21,1,2,2,3};
    cout<<s.findMin(nums);
    return 0;
}