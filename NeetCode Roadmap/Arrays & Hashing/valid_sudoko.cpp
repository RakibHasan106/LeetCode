#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            map<char,int>mp;
            for(int i = 0;i<9;i++){
                if(i==0){
                    for(int j=0;j<9;j++){
                        for(int k=0;k<9;k++){
                            if(board[k][j]!='.'){
                                mp[board[k][j]]+=1;
                                if(mp[board[k][j]]>1){
                                    return false;
                                }
                            }
                        }
                        mp.clear();
                        
                    }
                }
                for(int j=0;j<9;j++){
                    if(board[i][j]!='.'){
                        mp[board[i][j]]+=1;
                        if(mp[board[i][j]]>1){
                            return false;
                        }
                    }
                }
                mp.clear();
                if(i%3==0){
                    for(int j=0;j<9;j+=3){
                        for(int l=i;l<i+3;l++){
                            for(int m=j;m<j+3;m++){
                                if(board[l][m]!='.'){
                                    mp[board[l][m]]++;
                                    if(mp[board[l][m]]>1){
                                        return false;
                                    }
                                }
                            }
                        }
                        mp.clear();
                    }
                }
            }
            return true;
        }   
};

int main(){
    Solution s;
    vector<vector<char>>board= {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}};

    bool ans = s.isValidSudoku(board);
    cout<<ans<<endl;

    //single quotation('') means char in cpp
    //double quotation("") means string in cpp 
}