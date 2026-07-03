class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(); 
    
        
        int l = 0  , min_score = INT_MAX  , sum =0   ;
        int tot = 0 ; 
        for(int i = 0; i < n ; i++){
            tot += cardPoints[i]; 
        }
        if(k == n) return tot ; 
        for(int r =0 ; r < n ; r++ ){
            sum += cardPoints[r] ; 
            while((r-l +1 )> n - k){
                sum -= cardPoints[l]; 
                l++; 

            }
            if (r - l + 1 == n - k) min_score = min(sum , min_score) ; 
        }
        return tot - min_score ; 

    }
};