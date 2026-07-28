using ll = long long;
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        ll currsum = 0 ; 
        int num_needed = 0, i = 0 ; 
        while(currsum < n){
            if(i < nums.size() && nums[i] <= currsum + 1 ){
                currsum += nums[i];
                i++;
            }else {
                currsum += currsum + 1 ; 
                num_needed++; 
            }
        }
    return num_needed ; 
    }
};