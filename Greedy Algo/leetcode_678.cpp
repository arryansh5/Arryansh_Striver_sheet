class Solution {
public:
    bool checkValidString(string s) {
        int minopen = 0 , maxopen = 0 ; 
        for(auto c : s){
            if(c == '('){
                minopen++; 
                maxopen++; 
            }else if(c == ')'){
                minopen--; 
                maxopen--;
            }else{
                minopen--; 
                maxopen++;
            }
            if(maxopen < 0) return false  ; 
            minopen = max(minopen , 0); 
        }

        return minopen == 0 ; 
    }
};