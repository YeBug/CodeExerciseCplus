#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
	vector<int> finalPrices(vector<int>& prices) {
		stack<int> st;
		int size = prices.size();
		vector<int> ans(size);
		for (int i = size - 1; i >= 0; i--) {
			while (!st.empty() && st.top() > prices[i]) {
				st.pop();
			}
			ans[i] = prices[i] - (st.empty() ? 0 : st.top());
			st.push(prices[i]);
		}
		return ans;
	}
};