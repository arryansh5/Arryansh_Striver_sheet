class Solution {
public:
    int solve(int n , vector<int>& dp ,vector<int>& nums , int idx){
        if(idx >= n) return 0 ;
        if(dp[idx] != -1) return dp[idx]; 
        int rob = nums[idx] + solve(n,dp,nums,idx+2);
        int leave = solve(n,dp,nums,idx+1); 
        return dp[idx] = max(rob , leave) ; 
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> dp(n+1 , -1);
        return solve(n , dp , nums , 0);
    }
};