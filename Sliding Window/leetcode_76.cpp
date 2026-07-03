class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        for (char c : t) {
            mp[c]++;
        }

        int l = 0;
        int count = 0;
        int min_len = INT_MAX;
        int start = -1;

        for (int r = 0; r < s.length(); r++) {
            if (mp[s[r]] > 0)
                count++;

            mp[s[r]]--;

            while (count == t.length()) {
                if (r - l + 1 < min_len) {
                    min_len = r - l + 1;
                    start = l;
                }

                mp[s[l]]++;

                if (mp[s[l]] > 0)
                    count--;

                l++;
            }
        }

        return start == -1 ? "" : s.substr(start, min_len);
    }
};