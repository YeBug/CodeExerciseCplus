#include <vector>
#include<string>
#include<iostream>
#include "checkPermutation.cpp"

using namespace std; 

int main() {
	string s1 = "asdvbc";
	string s2 = "asddbc";
	Solution solution = Solution();
	cout<<solution.checkPermutation(s1, s2);
}