class Solution {
public:
    string removeDuplicateLetters(string s) {
        string result = "";
        int n = s.length(); 
        vector<bool> status(26 , false) ; 
        vector<int> nxap(26 , 0) ; 

        for(int i = 0 ; i  < n ; i++){
            nxap[s[i] - 'a'] = i;
        }

        for(int i = 0 ; i < n ; i++){
            if(status[s[i] - 'a'] == true) continue ; 
            while(result.length() > 0 && result.back() > s[i] && nxap[result.back() - 'a'] > i){
                status[result.back() - 'a'] = false ; 
                result.pop_back(); 
            }
            result.push_back(s[i]); 
            status[s[i] - 'a'] = true ; 

        }

        return result; 
    }
};