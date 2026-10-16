class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxproduct=INT_MIN;
        
        for(int st=0; st<n; st++){
            int curproduct=1;
            for(int end=st; end<n; end++){
                curproduct *= nums[end];
                maxproduct = max(curproduct, maxproduct);
            }
        }
        return maxproduct;
    }
};