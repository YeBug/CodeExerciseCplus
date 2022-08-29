#include <vector>

using namespace std;

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans(2 * n);
		for (int i = 0; i < n; i++) {
			ans[i * 2] = nums[i];
			ans[i * 2 + 1] = nums[n + i];
		}
		return ans;
	}
};

int main() {
	Solution solution = Solution();
	vector<int> nums = { 2,5,1,3,4,7 };
	int n = 3;
	nums = solution.shuffle(nums, n);
	for (int i = 0; i < 2 * n; i++) {
		printf("%d ", nums[i]);
	}
}