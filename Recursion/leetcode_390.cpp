class Solution {
public:
    int solve(int start  , int gap , int n , bool leftover){
        if(n == 1) return start ; 
        if(leftover || n % 2 != 0) return solve(start + gap , gap * 2 , n / 2 , !leftover); 
        else return solve(start, gap * 2 , n / 2 , !leftover);
    }
    int lastRemaining(int n) {
        
        return solve(1 , 1 , n , true) ; 


    }
};