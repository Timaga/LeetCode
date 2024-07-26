#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>>u;
	
		vector<vector<string>> ans;
		
		for (int i = 0; i < strs.size(); i++) {
			string word = strs[i];
			sort(word.begin(), word.end());
			u[word].push_back(strs[i]);
		}
		for (auto i :u) {
			ans.push_back(i.second);
		}
		return ans;
    }
};

int main() {
	Solution a;
	vector<string>digits = { "eat","tea","tan","ate","nat","bat" };
	a.groupAnagrams(digits);
	return 0;
}

