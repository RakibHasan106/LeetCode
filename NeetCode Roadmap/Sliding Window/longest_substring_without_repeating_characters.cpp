#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>charCount;
        int longestSubStringLength=0,currentStreak=0,left=0,right;
        for(right=0;right<s.size();right++){
            charCount[s[right]]+=1;
            if(charCount[s[right]]>1){
                for(;left<right;left++){
                    charCount[s[left]]--;
                    if(charCount[s[right]]==1){
                        left++;
                        break;
                    }
                }
                currentStreak = right - left + 1;
            }
            else{
                currentStreak++;
            }
            
            
            if(currentStreak>longestSubStringLength){
                longestSubStringLength = currentStreak;
            }
            
        }
        return longestSubStringLength;
    }
};
void main(){

}