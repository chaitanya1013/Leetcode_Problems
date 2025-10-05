class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";
        vector<int> hash(256, 0);
        for (char c : t) hash[c]++;

        int left = 0, right = 0;
        int count = t.size();
        int minLen = INT_MAX, startIndex = 0;

        while (right < s.size()) {
            if (hash[s[right]] > 0) count--;
            hash[s[right]]--;
            right++;

                while (count == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    startIndex = left;
                }
                hash[s[left]]++;
                if (hash[s[left]] > 0) count++;
                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIndex, minLen);
    }
};
