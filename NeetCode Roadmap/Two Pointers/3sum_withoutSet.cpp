#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int numslength = nums.size();
            if(numslength<3){
                return {{}};
            }
            
            sort(nums.begin(),nums.end());
            if(nums[0]==0&&nums[numslength-1]==0){
                return {{0,0,0}};
            }
            vector<vector<int>> output;
        
            for(int i=0;i<numslength;i++){
                if(nums[i]>0)break;
                
                if(i!=0 && nums[i]==nums[i-1]){
                    while(i<numslength && nums[i]==nums[i-1]){
                        i++;
                    }
                }
                if(i>=numslength){
                    break;
                }


                int target=0-nums[i];
                int left = i+1, right = numslength-1;
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
                        output.push_back({nums[i],nums[left],nums[right]});
                        left++;
                        if(nums[left]==nums[left-1]){
                            while(left<numslength && nums[left]==nums[left-1]){
                                left++;
                            }
                        }
                    }
                }
                
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