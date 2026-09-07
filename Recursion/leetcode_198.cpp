class Solution {
public:
    int solve(int n , vector<int>& dp ,vector<int>& nums , int idx , int sum){
        if(idx == n-1) return sum ;
        if(dp[idx] != -1) return dp[idx]; 
        for(int i = idx ; i < nums.size() ; i++){
            if(i != idx + 1){
                solve(n , dp , nums , idx + 1 , sum+= nums[i]);
            }
        }
        return sum ; 
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> dp(n+1 , -1);
        return solve(n , dp , nums , 0 , 0);
    }
};