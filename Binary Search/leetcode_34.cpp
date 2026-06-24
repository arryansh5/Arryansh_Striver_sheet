#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    int find_ceil(vector<int>& nums , int target){
        int low = 0 , high = nums.size() - 1 ;
        int index = nums.size(); 
        while(low <= high){
            int mid = (low + high )/ 2; 
            if(nums[mid] > target){
                high = mid -  1 ; 
                index = mid; 
            } else {
                low = mid + 1  ; 
            }
        } 
        return index; 
    }
    int find_floor(vector<int> &arr , int target){
            int low = 0 , high = arr.size() -1 ; 
            int index = -1; 
            while(low <= high){
                int mid = (low + high) / 2; 
                if(arr[mid] < target){
                    low = mid + 1 ; 
                    index = mid; 
                } else { 
                    high = mid - 1 ; 
                }
            }
            
                return index; // or handle as
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = find_floor(nums, target) + 1;
        int last = find_ceil(nums, target) - 1;

        // Validate if target exists in the range
        if (first <= last && first < nums.size() && nums[first] == target && nums[last] == target) {
            return {first, last};
        }
        return {-1, -1};
    }
    
};