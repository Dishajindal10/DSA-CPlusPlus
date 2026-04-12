// Problem: 1. Two Sum
// Link: https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            int complement = target-nums[i];
            if(mpp.find(complement) != mpp.end()){
                return {mpp[complement],i};
            }
            mpp[nums[i]]=i;
        }
        return{};
    }
};