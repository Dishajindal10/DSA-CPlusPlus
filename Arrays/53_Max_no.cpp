// Problem: 169. Maximum Number 
// Link: https://leetcode.com/problems/maximum-subarray/
// Time: O(n) | Space: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum =0,maxSum=INT_MIN;
        for(int val:nums){
            currSum +=val;
            maxSum = max(maxSum,currSum);
            if(currSum<0){
                currSum =0;
            }
        }
        return maxSum;
    }
};
