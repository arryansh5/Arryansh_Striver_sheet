class Solution {
public:
    static bool cmp(string &a , string&b){
        return a + b > b + a ; 
    }
    string largestNumber(vector<int>& nums) {
        vector<string> arr ; 
        string s = ""; 
        for(auto& a : nums){
            arr.push_back(to_string(a));
        }

        sort(arr.begin() , arr.end() , cmp); 

        if(arr[0] == "0") return "0"; 

        for(auto& x : arr){
            s += x ; 
        }
        return s ; 
    }
};