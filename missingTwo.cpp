#include<vector>

using namespace std;

class Solution {
public:
    vector<int> missingTwo(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < 3; i++) {
            nums.push_back(-1);
        }
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] != i && nums[i] != -1) {
                swap(nums[i], nums[nums[i]]);
            }
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == -1)ans.push_back(i);
        }
        return ans;
    }
};