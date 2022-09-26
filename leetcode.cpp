#include <vector>
#include<string>
#include<iostream>
#include "missingTwo.cpp"

using namespace std; 

int main() {
	vector<int> nums = { 1, 2, 3, 4, 6 };
	Solution solution = Solution();
	auto ans = solution.missingTwo(nums);
	for (int i : ans) {
		cout << i << " ";
	}
}