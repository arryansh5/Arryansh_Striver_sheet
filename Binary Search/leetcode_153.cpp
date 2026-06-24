#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1 , mid = low + 1  ; 
        // int ans = nums[low] ; 
        while(mid <= high){
            if(nums[low] >= nums[mid]){
                low = mid ; 
            }
            mid++ ; 
        }
        return nums[low]; 
    }
};