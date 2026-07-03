class Solution {
public:

    int atmost(vector<int>& nums, int goal){
        if(goal< 0)return 0; 
        int n = nums.size(); 
        int cnt = 0 ; 
        int l = 0 ; 
        int sum = 0 ; 
        for(int r = 0 ; r < n ; r++){
            sum += nums[r]; 
            while(sum > goal){
                sum = sum - nums[l]; 
                l++; 
            }

            cnt += (r - l + 1 ); 
        }

        return cnt ; 

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c1 = atmost(nums , goal) ;
        int c2 = atmost(nums , goal - 1); 
        int count = c1 - c2 ; 
        return count ; 
    }
};