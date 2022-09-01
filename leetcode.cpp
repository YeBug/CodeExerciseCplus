#include <vector>
#include "1475_finalPrices.cpp"
using namespace std; 

int main() {
	Solution solution = Solution();
	vector<int> prices = { 8,4,6,2,3 };
	prices = solution.finalPrices(prices);
	for (int i : prices) {
		printf("%d", i);
	}
}