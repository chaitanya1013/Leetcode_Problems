class Solution {
public:
    int beautySum(string s) {
        int total_beauty = 0;
        int n = s.length();

        for(int i = 0; i < n; ++i) {
            map<char, int> freq;
            for(int j = i; j < n; j++) {
                char current_char = s[j];
                freq[current_char]++;

                int min_freq = n + 1;
                int max_freq = 0;

                for (auto const& [key, val] : freq) {
                    min_freq = min(min_freq, val);
                    max_freq = max(max_freq, val);
                }
                total_beauty += (max_freq - min_freq);
            }
        }
        return total_beauty;
    }
};
