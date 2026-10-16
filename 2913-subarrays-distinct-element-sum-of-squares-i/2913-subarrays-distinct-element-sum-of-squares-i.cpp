class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        for(int st=0; st<n; st++){
            unordered_set<int>distinct;

            for(int end=st; end<n; end++){
                distinct.insert(nums[end]);

                int count=distinct.size();
                totalsum += count*count;
            }
        }
        return totalsum;
    }
};