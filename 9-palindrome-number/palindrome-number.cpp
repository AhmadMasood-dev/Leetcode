class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int y = s.length();
        for (int i = 0; i < y ; i++) {
            if (s[i] != s[y - 1]) {
                return false;
            }
            y--;
        }
        return true;
    }
};