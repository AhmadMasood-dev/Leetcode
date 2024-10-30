class Solution {
public:
    string intToRoman(int num) {
        // Roman symbols and corresponding integer values in descending order
        vector<pair<int, string>> romanSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        string result = "";
        
        // Iterate through each symbol-value pair
        for (const auto& [value, symbol] : romanSymbols) {
            // Append symbols while num is large enough for the current value
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }
        
        return result;
    }
};
