class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n = machines.size(); 
        int sum = 0 ; 
        for(int x : machines){
            sum += x ; 
        }
        if(sum % n != 0) return -1; 

        int needed = sum / n  , ans = 0 , cumsum = 0 ; 

        for(int i = 0 ; i < n ; i++){
            int bal = machines[i] - needed ; 
            cumsum += bal ; 
            ans = max(ans , max(abs(cumsum) , bal)); 
        }

        return ans ; 
    }
};