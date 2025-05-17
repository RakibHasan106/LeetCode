#include<bits/stdc++.h>
using namespace std;

class TimeMap {
public:
    map<string,map<int,string>>ds;
    map<string,vector<int>> timestamp_prev;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        ds[key][timestamp] = value;
        timestamp_prev[key].push_back(timestamp); 
    }
    
    string get(string key, int timestamp) {
        if(timestamp_prev[key].empty()==1){
            return "";
        }
        else{
            int left = 0 , right = timestamp_prev[key].size() - 1, mid, min_difference = INT_MAX, min_index;
            while(left<=right){
                mid = (left + right)/2;

                if(timestamp_prev[key][mid]==timestamp){
                    return ds[key][timestamp];
                }
                else if(timestamp_prev[key][mid]>timestamp){
                    right = mid - 1 ;
                }
                else if(timestamp_prev[key][mid] < timestamp){
                    left = mid + 1;
                    if((timestamp - timestamp_prev[key][mid])<min_difference){
                        min_difference = timestamp - timestamp_prev[key][mid];
                        min_index = mid;
                        // cout<<"timestamp:"<<timestamp<<"timestamp_prev[mid]"<<timestamp_prev[mid]<<"min_index:"<<min_index<<endl;
                    }
                }

                

            }
            
            if(min_index<=timestamp_prev[key].size()-1 && timestamp_prev[key][min_index]<timestamp){
                return ds[key][timestamp_prev[key][min_index]];
            }
            else{
                return "";
            }
        }
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */