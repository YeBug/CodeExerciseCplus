#include<unordered_map>

using namespace std;

class Solution {
public:
	bool checkPermutation(string s1, string s2) {
		unordered_map<char, int> map;
		for (char c : s1) {
			map[c]++;
		}
		for (char c : s2) {
			if (map[c] == 0)return false;
			map[c]--;
		}
		return true;
	}
};