#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i = 0; i<m; i++ ){
                if(target>=matrix[i][0] && target<=matrix[i][n-1]){
                    
                    int left=0, right = n-1;
                    while(left<=right){
                        int mid = (left+right)/2;
                        if(matrix[i][mid]==target){
                            return true;
                        }
                        else if(matrix[i][mid]>target){
                            right = mid-1;
                        }
                        else{
                            left = mid+1;
                        }
                    }
                }
            }
            return false;
        }
};

int main(){
    Solution s = Solution();
    vector<vector<int>> vec = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    cout<<s.searchMatrix(vec,3)<<endl;
    return 0;
}