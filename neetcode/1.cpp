#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {

            unordered_map < int , int> m;
            vector<int> v;

            for(int j=0;j<nums.size();j++){ 
                m.insert({nums[j],j});
            }

            int a;
            for(int i=0; i < nums.size(); i++){

                a=target-nums[i];
                // m.erase(nums[i]);
                auto it = m.find(a);
                
                
                if (it==m.end()){
                    continue;
                }
                
                else{
                    if (it->second==i){
                        m.erase(nums[i]);
                        continue;
                    }
                    else{v.push_back(i);
                    v.push_back(it->second);
                    return v;
                }
                }
                
                
            }
            return v;
        }
    };