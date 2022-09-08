#include <vector>
#include<string>
#include<iostream>
#include "667_constructArray.cpp"

using namespace std; 

int main() {
	Solution solution = Solution();
	auto ans = solution.constructArray(5, 3);
	for (auto i : ans) {
		cout << i << " ";
	}
}