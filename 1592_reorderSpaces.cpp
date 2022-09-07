#include<string>
#include<vector>
#include<string_view>

using namespace std;

class Solution {
public:
    vector<string> split(const string &text, char trim) {
        int n = text.size();
        vector<string> list;
        int pos = 0;
        while (pos < n) {
            while (pos < n && text[pos] == trim) {
                pos++;
            }
            if (pos < n) {
                int cur = pos;
                while (pos < n && text[pos] != trim) {
                    pos++;
                }
                list.push_back(text.substr(cur, pos - cur));
            }
        }
        return list;
    }

    string reorderSpaces(string text) {
        int n = text.size();
        vector<string> words = split(text, ' ');
        int spacenum = n;
        int wordnum = words.size();
        for (auto& word : words) {
            spacenum -= word.size();
        }
        string ans;
        if (wordnum == 1) {
            ans.append(words[0]);
            for (int i = 0; i < spacenum; i++) {
                ans.push_back(' ');
            }
        }
        int midspace = spacenum / (wordnum - 1);
        int leftspace = spacenum % (wordnum - 1);
        for (auto& word : words) {
            if (ans.size() > 0) {
                for (int j = 0; j < midspace; j++) {
                    ans.push_back(' ');
                }
            }
            ans.append(word);
        }
        for (int j = 0; j < leftspace; j++) {
            ans.push_back(' ');
        }
        return ans;
    }
};