#include<bits/stdc++.h>
using namespace std; 
//memoization approach 
// class solution {
//     public:
//     int solve_403(vector<int>& height , vector<int>& dp, int idx){
//         int n = height.size() ;
//         if(idx == 0) return 0 ; 
//         if(dp[idx] != -1) return dp[idx] ;
//         int left = abs(height[idx] - height[idx -1]) + solve_403(height , dp , idx-1) ; 
//         int right = INT_MAX ;
//         if(idx > 1) right = abs(height[idx] - height[idx -2]) + solve_403(height , dp , idx-2) ; 
//         return dp[idx] = min(left , right) ; 
//     }
// };

class solution {
    public:
    int solve_403(vector<int>& height , vector<int>& dp, int idx){
        int n = height.size() ;
        dp[0] = 0 ; 
        for(int i = 1 ; i < n ; i++){
            int left = dp[i-1] + abs(height[i] - height[i-1]); 
            int right = INT_MAX ; 

            if(i>1) right = dp[i-2] + abs(height[i] - height[i-2]); 
            dp[i] = min(left , right); 
        }
        return dp[n-1] ;
    }
}

int main() {

    vector<int> height = {10, 20, 30, 10};

    int n = height.size();

    vector<int> dp(n, -1);

    solution obj;

    cout << obj.solve_403(height, dp, n - 1) << endl;

    return 0;
}