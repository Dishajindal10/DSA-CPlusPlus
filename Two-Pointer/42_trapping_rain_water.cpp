// Problem: 42. Trapping Rain Water
// Link: https://leetcode.com/problems/trapping-rain-water/
// Approach: Two Pointer
// Logic: The water trapped at any bar depends on the min(leftMax, rightMax) - height[i].
// Time: O(n) | Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, leftMax = 0, rightMax = 0;
        int total = 0;

        while(left < right){
            if(height[left] < height[right]){
                if(height[left] >= leftMax)
                    leftMax = height[left];
                else total += leftMax - height[left];
                left++;
            }
            else{
                if(height[right] >= rightMax)
                    rightMax = height[right];
                else total += rightMax - height[right];
                right--;
            }
        }
        return total;
    }
};