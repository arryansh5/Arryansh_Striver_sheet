class Solution {
public:
    int atmost (vector<int>& nums, int k) {
        int l = 0  , n = nums.size() , element  = 0 , count = 0 ;
        unordered_map<int , int> mp ; 
        for(int r = 0 ; r < n ; r++){
            mp[nums[r]]++; 
            if(mp[nums[r]] == 1) element++; 
            while(element > k){
                mp[nums[l]]--; 
                if(mp[nums[l]] == 0){
                    element-- ; 
                }
                l++;
            }
            count += r - l + 1 ; 
        }
        return count ; 

    }
    int subarraysWithKDistinct(vector<int>& nums, int k){
        return (atmost(nums , k) - atmost(nums , k -1)) ; 
    }
};