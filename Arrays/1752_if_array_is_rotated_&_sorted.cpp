// Problem: 1752. If Array is Sorted and Rotated 
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Time: O(n) | Space: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }
        return count <= 1;
    }
};