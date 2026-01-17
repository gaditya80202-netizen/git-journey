#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            map<int ,int > m;

            int a= nums.size();

            for( auto i: nums){
                m.insert({i,i});
            }

            int b= m.size();

            if(a==b){
                return false;
            }
            else{
                return true;
            }
        }
    };