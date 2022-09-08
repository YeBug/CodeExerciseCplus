#include<vector>

using namespace std;

class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int start = n - k, end = n;
        vector<int> ans;
        for (int i = 1; i < start; i++) {
            ans.push_back(i);
        }
        while (start < end) {
            ans.push_back(start);
            ans.push_back(end);
            start++;
            end--;
        }
        if (start == end) {
            ans.push_back(start);
        }
        return ans;
    }
};