#include<bits/stdc++.h>
using namespace std ; 


class Solution{
    public:
        void solverat(int i , int j , vector<vector<int>>& arr , vector<string>& ans  , string my_ans , vector<vector<int>>& vis){
            int n = arr.size(); 
            if( i == n-1 && j == n-1){
                ans.push_back(my_ans);
                return ; 
            }

            // down 
            if(i+1 < n && arr[i+1][j]==1 && !vis[i+1][j]){
                vis[i+1][j] = 1 ; 
                solverat(i+1 , j , arr , ans , my_ans + "D" , vis);
                vis[i+1][j] = 0 ; 
            }

            // up 
            if(i-1 >= 0  && arr[i-1][j]==1 && !vis[i-1][j]){
                vis[i-1][j] = 1 ; 
                solverat(i-1 , j , arr , ans , my_ans + "U" , vis);
                vis[i-1][j] = 0 ; 
            }
            // right
            if(j+1 < n && arr[i][j+1]==1 && !vis[i][j+1]){
                vis[i][j+1]= 1 ; 
                solverat(i , j + 1 , arr , ans , my_ans + "R" , vis);
                vis[i][j+1] = 0 ; 
            }

            // Left
            if(j-1 >= 0 && arr[i][j-1]==1 && !vis[i][j-1]){
                vis[i][j-1]= 1 ; 
                solverat(i , j -1 , arr , ans , my_ans + "L" , vis);
                vis[i][j-1] = 0 ; 
            }
            
        }
};



int main(){
    

    int n = 4 ; 
    vector<vector<int>> arr = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    
    Solution obj ;
    vector<string> ans ; 
    vector<vector<int>> vis(n , vector<int>(n , 0)) ;
    if (arr[0][0] == 1 && arr[n - 1][n - 1] == 1) {
        vis[0][0] = 1;
        obj.solverat(0, 0, arr, ans, "", vis);
    }
    
    for(auto it : ans){
        cout << it << " "; 
    }
    cout << endl ;
    return 0 ; 
}