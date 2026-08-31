class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]>nums[end]){           ///right sorted
                st=mid+1;
            }else if(nums[mid]<nums[end]){         ///left sorted
                end=mid;
            }
            else{
                end--;
            }
        }
        return nums[st];
    }
};