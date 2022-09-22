#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, int> dict;
        for (int i = 0; i < pieces.size(); i++) {
            dict[pieces[i][0]] = i;
        }
        int index = 0;
        while (index < arr.size()) {
            if (dict.count(arr[index]) == 0)return false;
            vector<int>& cur = pieces[dict[(arr[index])]];
            for (int var : cur) {
                if (arr[index] != var)return false;
                index++;
            }
        }
        return true;
    }
};