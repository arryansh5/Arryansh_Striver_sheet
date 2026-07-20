class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length() ; 
        int max_length = 0 ; 
        bool hsodd = false ; 
        unordered_map<char , int> mp ; 
        for(int i = 0 ; i < n ; i++){
            mp[s[i]]++; 
        }
        for(auto &p : mp){
            if(p.second % 2 == 0){
                max_length += p.second; 
            }else{
                max_length += p.second- 1; 
                hsodd = true ; 
            }
        }
        if(hsodd) max_length += 1 ; 
        return max_length ; 
    }
};