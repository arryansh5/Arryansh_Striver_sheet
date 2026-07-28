class Solution {
public:
    vector<int> maxSubs(vector<int>& nums, int k) {
        int n = nums.size();
        int drop = n - k;
        vector<int> st;

        for (int x : nums) {
            while (!st.empty() && st.back() < x && drop) {
                st.pop_back();
                drop--;
            }

            if ((int)st.size() < k)
                st.push_back(x);
            else
                drop--;
        }

        return st;
    }

    bool greater(vector<int>& nums1, int i, vector<int>& nums2, int j) {
        while (i < nums1.size() && j < nums2.size() && nums1[i] == nums2[j]) {
            i++;
            j++;
        }

        return j == nums2.size() ||
               (i < nums1.size() && nums1[i] > nums2[j]);
    }

    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() || j < nums2.size()) {
            if (greater(nums1, i, nums2, j))
                ans.push_back(nums1[i++]);
            else
                ans.push_back(nums2[j++]);
        }

        return ans;
    }

    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> ans;

        int a = max(0, k - (int)nums2.size());
        int b = min(k, (int)nums1.size());

        for (int i = a; i <= b; i++) {
            int j = k - i;

            vector<int> A = maxSubs(nums1, i);
            vector<int> B = maxSubs(nums2, j);
            vector<int> cur = merge(A, B);

            if (greater(cur, 0, ans, 0))
                ans = cur;
        }

        return ans;
    }
};