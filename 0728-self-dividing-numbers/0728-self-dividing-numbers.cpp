class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            int temp = i;
            bool valid = true;

            while (temp > 0) {
                int lastdigit = temp % 10;
                v.push_back(lastdigit);
                temp = temp / 10;
            }

            for (int j = 0; j < v.size(); j++) {
                if (v[j] == 0 || i % v[j] != 0) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans.push_back(i);
            }

            v.clear();
        }

        return ans;
    }
};