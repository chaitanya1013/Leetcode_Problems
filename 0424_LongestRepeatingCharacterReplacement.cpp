class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxLength = 0, maxcount = 0;
        vector<int> hash(26, 0);
        while(r < s.size()) {
            hash[s[r] - 'A']++;
            maxcount = max(maxcount,hash[s[r] - 'A']);
            while ((r - l + 1) - maxcount > k) {
                hash[s[l] - 'A']--;
                l++;
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
