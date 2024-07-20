#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     
        string word;
        string word2_s;
        string finalword = "";
        std::sort(strs.begin(), strs.end());
        if (strs.size() > 0) {
                word = strs[0];
                word2_s = strs[strs.size()-1];           
                for (int i = 0; i < word.size(); i++) {
                    if (word[i] == word2_s[i]) {
                        finalword += word[i];
                    }
                    else {
                        return finalword;
                    }
            }
            return finalword;
        }
        else {

            return finalword;
        }
    }
};

int main() {
    Solution a;
    vector<string>strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    cout<< a.longestCommonPrefix(strs);
    return 0;
}