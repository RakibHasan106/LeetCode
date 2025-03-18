#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            map<int,int>mp;
            int len = nums.size();
            for(int i=0;i<len;i++){
                mp[nums[i]]++;
            }
            int temp = (mp.begin()->first)-1;
            int streak = 0,max=0;
            for(auto it=mp.begin();it!=mp.end();it++){
                if(temp+1 == it->first){
                    streak++;
                }
                else{
                    streak=1; //for any element the streak should be 1 at first.
                }
                if(streak>max){
                    max=streak;
                }
                temp = it->first;
            }
            return max;
        }
};
int main(){
    Solution s;
    vector<int>vec {9,1,4,7,3,-1,0,5,8,-1,6};

    cout<<s.longestConsecutive(vec)<<endl;
    return 0;
}