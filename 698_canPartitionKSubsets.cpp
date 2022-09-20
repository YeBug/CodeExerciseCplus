#include<algorithm>
#include<vector>
#include<functional>
#include<numeric>

using namespace std;

class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if (total % k)return false;
        sort(nums.begin(), nums.end());
        int per = total / k;
        if (nums.back() > per)return false;
        int n = nums.size();
        vector<bool> dp(1 << n, true);
        function<bool(int, int)> dfs = [&](int s, int p)->bool {
            if (s == 0)return true;
            if (!dp[s])return false;
            dp[s] = false;
            for (int i = 0; i < n; i++) {
                if ((nums[i] + p) > per)return false;
                if ((s >> i & 1) && dfs(s ^ (1 << i), (p + nums[i]) % per))return true;
            }
            return false;
        };
        return dfs((1 << n) - 1, 0);
    }
};