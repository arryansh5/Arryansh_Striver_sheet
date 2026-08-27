#include<bits/stdc++.h>
using namespace std; 

bool revs(string s, int i , int j){
    if(i > j) return true; 
    if(s[i] != s[j]) return false ; 
    return revs(s , i+1 , j-1 );
}

int main(){
    string  s = "Arryansh" ;
    cout<<revs(s , 0 , 6)<<endl; 
    return 0; 
}