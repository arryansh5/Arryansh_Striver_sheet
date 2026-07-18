class Solution {
public:
    string smallestSubsequence(string s) {
        string ans =""; 
        int n  = s.length(); 
        vector<bool> status(26 , false); 
        vector<int> nxap(26) ; 
        for(int i = 0 ; i < n ; i++){
            nxap[s[i] - 'a'] = i ;
        }

        for(int i =0 ; i < n ;i++){
            if(status[s[i] - 'a'] == true) continue ; 
            while(ans.length() > 0 && ans.back() > s[i] && nxap[ans.back() - 'a'] > i){
                status[ans.back() - 'a'] = false ; 
                ans.pop_back(); 
            }

            ans.push_back(s[i]); 
            status[s[i] - 'a'] = true ;
        }

        return ans ;
    }
};