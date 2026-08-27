#include<bits/stdc++.h>
using namespace std ;

// void solve(int n , int &sum){
//     if(n == 0){
//         return ; 
//     }
//     solve(n-1 , sum) ;
//     sum += n ; 
    
// }

int solve(int n){
    if(n == 1) return 1 ; 
    return n * solve(n-1); 
}
int main(){
    int n = 5 ;
    cout<<solve(n)<<endl; 
}