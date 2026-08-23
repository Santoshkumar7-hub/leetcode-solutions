class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxsum = sum;

        // Slide the window
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxsum = max(maxsum, sum);
        }

        return (double)maxsum / k;
    }
};