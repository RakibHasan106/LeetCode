#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            if(nums.size()<3){
                return {{}};
            }
            
            sort(nums.begin(),nums.end());
            if(nums[0]==0&&nums[nums.size()-1]==0){
                return {{0,0,0}};
            }
            set<vector<int>> temp_output;
        
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0)break;
                int target=0-nums[i];
                int left = 0, right = nums.size()-1;
                while(left<right){
                    int tot = nums[left] + nums[right] ;
                    if(left==i||tot<target){
                        left++;
                        // cout<<"I am here"<<endl;
                    }
                    else if(right==i||tot>target){
                        right--;
                        // cout<<"I am here"<<endl;
                    }
                    else if(tot==target){
                        vector<int>temp = {nums[i],nums[left],nums[right]};
                        sort(temp.begin(),temp.end());
                        temp_output.insert(temp);
                        left++;
                    }
                }
                
            }
            vector<vector<int>>output;
            for(auto it : temp_output){
                vector<int>temp;
                for(auto bit: it){
                    temp.push_back(bit);
                }
                output.push_back(temp);
                temp.clear();
            }
            return output;
        }
};
int main(){
    Solution s;
    vector<int>nums {2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4,5,5,-10};
    vector<vector<int>> output = s.threeSum(nums);
    for(auto it:output){
        for(auto num:it){
            cout<<num<<",";
        }
        cout<<endl;
    }
}