class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_area = 0;
        
        while (left < right) {
            // Calculate area between left and right pointers
            int area = (right - left) * min(height[left], height[right]);
            max_area = max(max_area, area);
            
            // Move the pointer of the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_area;
    }
};
