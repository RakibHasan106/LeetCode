#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    
        string encode(vector<string>& strs) {
            string output;
            int len =  strs.size();
            for(int i =0 ;i<len;i++){
                int len2 = strs[i].size();
                for(int j=0;j<len2;j++){
                    // int b = (int)strs[i][j];
                    output.append(to_string((int)strs[i][j]));
                    output.append(";");  //end of an alphabet.
                }
                output.append("e"); //end of a string;
                
            }
            return output;
        }
    
        vector<string> decode(string s) {
            vector<string>output;
            string temp;
            string word;
            int len = s.size();
            for(int i= 0 ; i<len;i++){
                if(s[i]=='e'){
                    output.push_back(word);
                    word.clear();
                }
                else if(s[i]==';'){
                    word += static_cast<char>(stoi(temp));
                    temp.clear();
                }
                else{
                    temp+=s[i];
                }
            }
            return output;
        }
};

int main(){
    Solution s;
    vector<string>ss{"neet","code","love","you"};

    string code = s.encode(ss);
    cout<<code<<endl;
    vector<string> output = s.decode(code);

    for(int i =0 ;i<output.size();i++){
        cout<<output[i]<<endl;
    }
    
}

