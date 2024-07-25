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
	vector<int> plusOne(vector<int>& digits) {
		int i = 1;
		digits[digits.size() - i] = digits[digits.size() - i] + 1;
		if (digits[digits.size() - i] == 10) {
			do {
				digits[digits.size() - i] = 0;
				i++;
				if (digits[0] != 0) {
					digits[digits.size() - i] = digits[digits.size() - i] + 1;
				}
				else {
					digits.insert(digits.begin(),1);
				}
			} while (digits[digits.size() - i] == 10);
		}
		return digits;
	}
};

int main() {
	Solution a;
	vector<int>digits = { 9 };
	a.plusOne(digits);
	return 0;
}

