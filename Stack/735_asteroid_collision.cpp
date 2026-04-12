// Problem: 735. Asteroid Collision 
// Link: https://leetcode.com/problems/asteroid-collision/
// Time: O(n) | Space: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st; //using vector as a stack to avoid reversal of stack and the end.

        for(int x : asteroids){
            bool destroy = false;

            while(!st.empty() && st.back() > 0 && x < 0){
                if(abs(x) > st.back()){
                    st.pop_back();
                    continue;
                }
                else if(abs(x) == st.back()){
                    st.pop_back();
                    destroy = true;
                    break;
                }
                else{
                    destroy = true;
                    break;
                }
            }

            if(!destroy) st.push_back(x);
        }

        return st;
        
    }
};