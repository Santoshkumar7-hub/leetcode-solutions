class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int totalsubarray=0;
        for(int start=0; start<n; start++){
            int cursum=0;
            for(int end=start; end<n; end++){
                cursum += nums[end];
                if(cursum==k){
                    totalsubarray++;
                }
            }
        }
        return totalsubarray;
        
    }
};