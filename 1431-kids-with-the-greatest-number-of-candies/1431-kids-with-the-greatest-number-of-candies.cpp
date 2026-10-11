class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n=candies.size();
        int maxCandies=INT_MIN;
        for(int i=0; i<n; i++){
            if(candies[i]>=maxCandies){
                maxCandies=candies[i];
            }
        }
        vector<bool> ans;
        for(int i=0; i<n; i++){
            ans.push_back(candies[i]+extraCandies>=maxCandies);
        }
        return ans;
    }
};