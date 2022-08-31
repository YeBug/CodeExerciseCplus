#include <vector>
#include "946_validateStackSequences.cpp"
using namespace std; 

int main() {
	Solution solution = Solution();
	vector<int> pushed = { 1,2,3,4,5 };
	vector<int> popped = { 4,5,3,2,1 };
	printf("%d", solution.validateStackSequences(pushed, popped));
}