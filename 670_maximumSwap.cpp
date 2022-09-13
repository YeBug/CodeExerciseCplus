#include<string>

using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int id_1 = -1, id_2 = -1;
        int maxId = size(str) - 1;
        for (int i = size(str) - 1; i >= 0; i--) {
            if (str[maxId] < str[i]) {
                maxId = i;
            }
            else if (str[maxId] > str[i]) {
                id_1 = i;
                id_2 = maxId;
            }
        }
        if (id_1 < 0 || id_1 == id_2) {
            return num;
        }
        swap(str[id_2], str[id_1]);
        return stoi(str);
    }
};