#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		string word;
		bool end = false;
		for (int i = s.size() - 1; i > -1; i--) {
			if (s[i] != ' ' && end == false) {
				word += s[i];
			}
			else if(word.size()!=0){
				end = true;
			}
		}
		return word.size();
	}
};

int main() {
	Solution a;
	string s = "Hello World";
	
	cout << a.lengthOfLastWord(s);
	return 0;
}

