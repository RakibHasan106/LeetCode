#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[right]==target){
                return right;
            }
            else if(nums[left]==target){
                return left;
            }
            else if((target<nums[mid] && target<nums[right])){
                if(nums[mid]<nums[right]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }

            }
            else if(target<nums[mid] && target>nums[right]){
                right = mid - 1;
            }

            else if(target>nums[mid] && target>nums[right]){
                if(nums[mid]>nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            else if(target>nums[mid] && target<nums[right]){
                left = mid + 1;
            }
            

            // cout<<"mid:"<<nums[mid]<<endl;
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>nums = {8,9,2,3,4};
    cout<<s.search(nums,9)<<endl;
    return 0;
}