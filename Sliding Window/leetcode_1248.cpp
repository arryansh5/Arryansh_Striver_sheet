class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int l = 0 ;
        int n = nums.size();
        int cnt = 0; 
        int sum = 0 ; 
        for(int r = 0 ; r < n ; r++ ){
            sum += (nums[r] % 2 ); 
            while(sum > k){
                sum -= (nums[l] % 2) ; 
                l++; 
            }
            
            cnt += (r - l + 1); 

        }
        return  cnt ; 
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       return atmost(nums , k) - atmost(nums , k -1) ;  
    }
};