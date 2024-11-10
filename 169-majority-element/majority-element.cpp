class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        
        // Step 1: Find the candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num; // new candidate
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Step 2: Return the candidate (since it's guaranteed to be the majority element)
        return candidate;
    }
};
