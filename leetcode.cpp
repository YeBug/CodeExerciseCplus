#include <vector>
#include<string>
#include<iostream>
#include "698_canPartitionKSubsets.cpp"

using namespace std; 

int main() {
	vector<int> nums = { 730, 580, 401, 659, 5524, 405, 1601, 3, 383, 4391, 4485, 1024, 1175, 1100, 2299, 3908 };
	Solution solution = Solution();
	cout<<solution.canPartitionKSubsets(nums, 4)<<endl;
}