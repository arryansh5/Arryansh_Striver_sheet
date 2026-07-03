class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int substr = 0 , l = 0;  
        unordered_map<char , int> mp ;
        for(int r = 0 ; r < n ; r++){
            mp[s[r]]++; 
            while(mp['a'] >= 1 && mp['b'] >= 1 && mp['c'] >= 1){
                substr +=  n - r  ; 
                mp[s[l]]--; 
                l++; 
            }

        }
   
        return substr; 
    }
};