class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(); 
        int i = 0 , j = n -1 , currarea = 0 ,maxarea = 0; 
        while(i < j){
            currarea = ((j-i)*(min(height[i] , height[j]))); 
            (height[i] <= height[j]) ?  i++ : j--; 
            maxarea = max(currarea , maxarea); 
        }
        return maxarea ; 
    }
};



