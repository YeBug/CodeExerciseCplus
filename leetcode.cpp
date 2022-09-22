#include <vector>
#include<string>
#include<iostream>
#include "1640_canFormArray.cpp"

using namespace std; 

int main() {
	vector<int> nums = { 91,4,64,78 };
	vector<vector<int>> pieces = { {78}, {4, 64}, {91} };
	Solution solution = Solution();
	cout<<solution.canFormArray(nums, pieces) << endl;
}