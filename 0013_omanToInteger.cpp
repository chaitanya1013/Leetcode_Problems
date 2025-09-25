class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_values = {
            {'I' , 1},   {'V' , 5},   {'X' , 10},  {'L' , 50},
            {'C' , 100}, {'D' , 500}, {'M' , 1000}};

        int total = 0;

        for(int i = 0; i < s.length() - 1; ++i) {
            int current_value = roman_values[s[i]];
            int next_value = roman_values[s[i+1]];

            if(current_value < next_value) {
                total -= current_value;
            }
            else {
                total += current_value;
            }
        }
        total += roman_values[s[s.length() - 1]];

        return total;
    }
};
