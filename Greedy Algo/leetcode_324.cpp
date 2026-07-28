class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> my_nums = nums ; 
        sort(my_nums.begin() , my_nums.end());
        int n = nums.size();  
        int i = (n-1)/2 , j = n - 1 , k = 0 ; 
        vector<int> ans(n) ; 
        for (int k = 0; k < n; k++) {
            if (k % 2 == 0)
                ans[k] = my_nums[i--];
            else
                ans[k] = my_nums[j--];
        }
        nums = ans ; 


    }
};