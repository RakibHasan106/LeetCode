#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int trap(vector<int>& height) {
            int len = height.size();
            int output=0;
            int j;
            for(int i=0;i<len;i++){
                int max=i+1;
                for(j=i+1;j<len;j++){
                    if(height[j]>height[max]){
                        max = j;
                        // cout<<max<<endl;
                    }
                    if(height[j]>=height[i]){
                        // cout<<j<<" "<<i<<endl;
                        break;
                    }
                }
                //have to take the min among the two barier.
                if(j==len){
                    j=max;
                    // cout<<"here"<<endl;
                }
                if(j==i){
                    continue;
                }
                if(j-i!=1){
                    cout<<j<<" "<<i<<endl;
                    int m = min(height[j],height[i]);
                    cout<<m<<endl;
                    for(int k=i+1;k<=j;k++){
                        output += (m- height[k])>0 ? (m - height[k]) : 0  ;
                    }
                    i=j-1;
                    
                    cout<<output<<endl;
                    // cout<<i<<endl;
                }
                // cout<<i<<endl;
            }
            return output;
            
        }
};
int main(){
    Solution s;
    vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<s.trap(height)<<endl;
    return 0;
}