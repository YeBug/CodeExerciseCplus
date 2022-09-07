#include <vector>
#include<string>
#include<iostream>
#include "1592_reorderSpaces.cpp"

using namespace std; 

int main() {
	Solution solution = Solution();
	string str = "  this   is  a sentence ";
	cout << solution.reorderSpaces(str) << endl;
}