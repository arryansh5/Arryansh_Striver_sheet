#include<bits/stdc++.h>
using namespace std; 

class solution {
    public:
        int solve(vector<int>& heights , vector<int>& dp , int idx){
            int n = heights.size() ;
            if(idx == 0) return 0 ; 
            if(dp[idx] != -1) return dp[idx] ; 
            int left = solve(heights , dp , idx - 1) + abs(heights[idx] - heights[idx-1]) ; 
            int right = INT_MAX ; 

            if(idx > 1) right = solve(heights , dp , idx - 2) + abs(heights[idx] - heights[idx-2]); 
            
            return dp[idx] = min(left , right) ;  
        }
};

int main(){ 
    vector<int> heights = {2 , 1 , 3 , 5 , 4}; 
    int n = heights.size(); 
    vector<int> dp(n , -1); 
    solution sol ; 
    cout<<sol.solve(heights , dp , n-1)<<endl; 
}