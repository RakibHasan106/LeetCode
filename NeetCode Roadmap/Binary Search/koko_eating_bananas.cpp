#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            long long int max = * max_element(piles.begin(),piles.end());
            int n = piles.size();
            long long int left = 1, right = max;
            long long int count,currentMin;
            while(left<=right){
                count = 0;
                int mid = (double)(right+left)/2.0 ;
                // cout<<right<<endl;
                for(int i=0;i<n;i++){
                    count += ceil((double)piles[i]/(double)mid);
                    // cout<<"left:"<<left<<" right:"<<right<<" mid: "<<mid<<" count: "<<count<<endl;
                    // cout<<count<<endl;
                }
                // cout<<count<<endl;
                if(count>h){
                    left=mid+1;
                }
                else{
                    right = mid - 1;
                    currentMin = mid;
                }
                
                
            }
            return currentMin;

        }
};
int main(){
    vector<int>piles = {1,1,1,999999999};
    cout<<piles[0]+piles[1]<<endl;
    cout<<Solution().minEatingSpeed(piles,10)<<endl;
    return 0;
}