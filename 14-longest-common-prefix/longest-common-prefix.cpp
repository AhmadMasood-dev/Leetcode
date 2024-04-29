class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int count = str.size();
        for (int i = 0; i < str[0].size(); ++i) {
            for (int j = 1; j < count; ++j) {
                if (str[j].size() <= i || str[j][i] != str[0][i]) {
                    return str[0].substr(0, i);
                }
            }
        }
        return str[0];
    }
};