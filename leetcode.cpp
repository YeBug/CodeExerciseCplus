#include <vector>
#include<string>
#include<iostream>
#include "1636_frequencySort.cpp"

using namespace std; 

int main() {
	vector<int> nums = { -1,1,-6,4,5,-6,1,4,1 };
	Solution solution = Solution();
	solution.frequencySort(nums);
	for (int i : nums) {
		cout << i << " ";
	}
}