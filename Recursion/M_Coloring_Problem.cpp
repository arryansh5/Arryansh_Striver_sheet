#include<bits/stdc++.h>
using namespace std; 

class solution{
    bool issafe(){

    }

    bool mcolor(int node , int color[] , int m , int N , bool graph[101][101]){
        if(node == N){
            return true; 
        }
        for(int i = 1 ; i <= m ; i++){
            if(issafe(node , color , graph , N , i)){
                color[node] = i ; 
                if(mcolor(node+1 , color , m , N , graph)) return true ; 
                color[node] = 0 ; 
            }
        }
        return false ; 
    }
};



int main(){
    int N = 4 , m = 3 ; 
    bool graph[101][101] = {0} ;
    
    vector<int> color(N , 0); 
    solution obj ; 
    if(obj.mcolor(1 , color , m , N , graph))return true ; 
    else return false ;
}