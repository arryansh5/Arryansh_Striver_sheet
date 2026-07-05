#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size() - 1 ; 
        int jumps = 0 ; 
        int currentend = 0 ; 
        int farthest = 0 ; 
        for(int i = 0 ; i < n ; i++){
            farthest = max(farthest , i + nums[i]); 
            if(i == currentend){
                jumps++; 
                currentend = farthest; 

                if(currentend >= n) break ; 
            }
        }
        return jumps ; 
    }
};
