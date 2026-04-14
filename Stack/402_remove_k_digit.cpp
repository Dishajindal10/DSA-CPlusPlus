// Problem: 402. Remove K Digits 
// Link: https://leetcode.com/problems/remove-k-digits/
// Approach: using monotonic stack
// Time: O(n) | Space: O(1)

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";

        for(int i=0; i<num.size(); i++){
            while(!st.empty() && k>0 && (st.back() > num[i])){
                st.pop_back();
                k--;
            }

            st.push_back(num[i]);
        }

        while(k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        int i = 0;
        while(i < st.size() && st[i] == '0') i++;

        return (i == st.size()) ? "0" : st.substr(i, st.size() - i);
    }
};