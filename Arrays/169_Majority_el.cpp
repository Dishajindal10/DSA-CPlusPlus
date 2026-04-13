// Problem: 169. Majority Element 
// Link: https://leetcode.com/problems/majority-element/
// Time: O(n) | Space: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0) el=nums[i];
            cnt += (el == nums[i]) ? 1 : -1;

        }
        if(cnt > 0) return el;
        return -1;
        
    }
};