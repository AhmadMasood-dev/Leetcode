class Solution {
public:
    string makeFancyString(string s) {
        string result;
        
        for (char c : s) {
            int len = result.size();
            // Check if the last two characters are the same as the current character
            if (len >= 2 && result[len - 1] == c && result[len - 2] == c) {
                continue; // Skip this character to prevent three consecutive characters
            }
            result += c; // Append the character if the condition is satisfied
        }
        
        return result;
    }
};
