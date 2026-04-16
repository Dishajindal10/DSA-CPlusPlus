// Problem: 84. Largest Rectangle in Histogram 
// Link: https://leetcode.com/problems/largest-rectangle-in-histogram/
// Approach: using monotonic stack
// Time: O(n) | Space: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>nse(vector<int>heights){
        int n = heights.size();
        stack<int>st;
        vector<int>right(n);

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();
            
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return right;
    }

    vector<int>pse(vector<int>heights){
        int n = heights.size();
        stack<int>st;
        vector<int>left(n);

        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();
            
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return left;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> left = pse(heights);
        vector<int> right = nse(heights);

        int max_i = 0;
        for(int i = 0; i<heights.size(); i++){
            max_i = max(max_i, heights[i] * (right[i] - left[i] - 1));
        }
        return max_i;
    }
};