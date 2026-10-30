#include<bits/stdc++.h>
using namespace std; 


int main(){
    int n = 7 , r =  2; 
    long long  res = 1 ; 
    for(int i = 0 ; i < r ; i++){
        res *= (n - i); 
        res /= (i+1);
    }
    cout<<res<<endl;
}