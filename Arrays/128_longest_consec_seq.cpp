// Problem: 128. Longest Consecutive Sequence 
// Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Time: O(n) | Space: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int longest = -1;

        if(nums.size() == 0) return 0;
        
        for(auto num : st){
            if(st.find(num - 1) == st.end()){
                int curr = num;
                int cnt = 1;

                while(st.find(curr + 1) != st.end()){
                    curr++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};