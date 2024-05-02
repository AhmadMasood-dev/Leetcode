class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int pre = 0, ans = 0;
        for (int i=0; i<bank.size(); ++i) {
            int cur = count(bank[i].begin(), bank[i].end(), '1');
            if (cur > 0) {
                ans += pre * cur;
                pre = cur;
            }
        }
        return ans;
    }
};