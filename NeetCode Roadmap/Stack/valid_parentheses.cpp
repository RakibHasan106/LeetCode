#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isValid(string s) {
            int l = s.size();
            if(l%2==1){
                return false;
            }
            stack<char> st;
            map<char,char>mp;
            mp[')'] = '(';
            mp['}'] = '{';
            mp[']'] = '[';
            for(int i=0;i<l;i++){
                if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                    st.push(s[i]);
                }
                else{
                    if(st.empty() || st.top()!=mp[s[i]]){
                        return false;
                    }
                    st.pop();
                }
            }
            if(!(st.empty())){
                return false;
            }
            return true;
        }
};
int main(){
    Solution s;
    cout<<s.isValid("()[]{}");
    return 0;
}