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
	int strStr(string haystack, string needle) {
		vector<char> a;
		int k = -1;
		for (int i = 0; i < needle.size(); i++) {
			a.push_back(needle[i]);
		}
		int j = 0;
		vector<int> b;
		for (int i = 0; i < haystack.size(); i++) {
			if (a.size() == b.size()) {
				break;
			}
			if (haystack[i] == a[j]) {
				if (k == -1) {
					k = i;
				}
				if (j == 0 && a.size() != b.size()) {

					b.clear();
				}
				b.push_back(i);
				j++;
			}
			else {
				if (k != -1) {
					i = k;
					k = -1;
				}
				j = 0;
			}
		}
		if (a.size() == b.size()) {
			return b[0];
		}
		else return -1;

	}
};

int main() {
	Solution a;
	string haystack = "aabaabbbaabbbbabaaab";
	string needle = "abaa";
	
	cout << a.strStr(haystack, needle);
	return 0;
}

