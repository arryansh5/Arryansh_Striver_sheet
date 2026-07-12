<<<<<<< HEAD
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(); 
        int i = 1, sum = 1 ; 
        while(i < n){
            if(ratings[i] == ratings[i-1]) {
                sum += 1 ; 
                i++; 
                continue; 
            }
            int peak = 1 ; 
            while(i < n && ratings[i] > ratings[i-1]){
                peak++;
                sum += peak ; 
                i++; 
            }
            int down = 1 ; 
            while (i < n && ratings[i] < ratings[i - 1]){
                sum += down; 
                down++; 
                i++;
            }

            if(down > peak){
                sum += down - peak ; 
            }
        }
        return sum ; 
    }
=======
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(); 
        int i = 1, sum = 1 ; 
        while(i < n){
            if(ratings[i] == ratings[i-1]) {
                sum += 1 ; 
                i++; 
                continue; 
            }
            int peak = 1 ; 
            while(i < n && ratings[i] > ratings[i-1]){
                peak++;
                sum += peak ; 
                i++; 
            }
            int down = 1 ; 
            while (i < n && ratings[i] < ratings[i - 1]){
                sum += down; 
                down++; 
                i++;
            }

            if(down > peak){
                sum += down - peak ; 
            }
        }
        return sum ; 
    }
>>>>>>> c35958b9a75a01c657a247bce637683bea18df8c
};