#include <vector>
#include<string>
#include<iostream>
#include "670_maximumSwap.cpp"

using namespace std; 

int main() {
	int num;
	cin >> num;
	Solution solution = Solution();
	auto ans = solution.maximumSwap(num);
	cout << ans << endl;
}