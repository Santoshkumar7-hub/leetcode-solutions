class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        vector<int>ans;

        for(int i=0; i<n; i++){
            int num=nums[i];

            if(num>9){
                while(num>0){
                    int lastdigit=num%10;
                    v.push_back(lastdigit);
                    num=num/10;
                }
                reverse(v.begin(), v.end());
                for(int j=0; j<v.size(); j++){
                    ans.push_back(v[j]);
                }
                v.clear();
                
            }else{
                ans.push_back(num);
            }
        }
        return ans;
    }
};