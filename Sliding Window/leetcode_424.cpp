#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length(); 
        unordered_map<int , int> mp ; 
        int l = 0 , max_freq = 0 , max_len = 0 , element = 0 ;
        for(int r  = 0 ; r < n ; r++){
            mp[s[r]]++;
            max_freq = max(max_freq , mp[s[r]]); 
        
            while(((r - l + 1 ) - max_freq) > k){
                mp[s[l]]--; 
                l++; 
            }
            max_len = max(max_len , (r - l + 1)); 
        }
        return max_len; 
    }
};