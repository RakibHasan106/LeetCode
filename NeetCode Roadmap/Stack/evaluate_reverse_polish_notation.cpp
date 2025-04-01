#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int>numbers;
            for(int i=0;i<tokens.size();i++){
                if(tokens[i]=="+" || tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                    int num1 = numbers.top();
                    numbers.pop();
                    int num2 = numbers.top();
                    numbers.pop();

                    int result;
                    // tokens[i]=="+"? (result=num1+num2) : -1;
                    // tokens[i]=="-"? (result=num2-num1) : -1;
                    // tokens[i]=="*"? (result=num1*num2) : -1;
                    if(tokens[i]=="+"){
                        result = num1 + num2;
                    }
                    else if(tokens[i]=="-"){
                        result = num2 - num1;
                    }
                    else if(tokens[i]=="*"){
                        result = num1 * num2;
                    }
                    else{
                        result=num2/num1;
                    }
                    numbers.push(result);
                }
                else{
                    numbers.push(stoi(tokens[i]));
                }
            }
            return numbers.top();
        }
};

int main(){
    Solution s;
    vector<string>tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout<<s.evalRPN(tokens)<<endl;
    return 0;
}