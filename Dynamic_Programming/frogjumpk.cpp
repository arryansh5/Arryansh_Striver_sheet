#include<bits/stdc++.h>
using namespace std ; 

class solution {
    public:
        int solve(vector<int>& dp , vector<int>& heights , int idx , int k ){
            int n = heights.size(); 
            if(idx == 0) return 0 ; 
            if(dp[idx] != -1) return dp[idx] ;
            int min_cost = INT_MAX ; 
            for(int i = 1 ; i  <= k ; i++){
                if(idx - i >= 0){
                    int cost = abs(heights[idx] - heights[idx - i]) + solve(dp , heights , idx - i , k) ; 
                    min_cost = min(min_cost   , cost) ; 
                }
            }
            return dp[idx] = min_cost ; 
        }

};

int main() {
    vector<int> heights = {10, 5, 20, 0, 15};
    int k = 2;
    
    solution obj;
    int n = heights.size() ; 
    vector<int> dp(n+1 , -1); 

    cout << "Minimum energy: "
         << obj.solve(dp , heights,n-1 ,k)
         << endl;

    return 0;
}