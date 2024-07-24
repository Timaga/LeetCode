#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
using namespace std;




class Solution {
public:
	bool isValid(string s) {
		std::stack<char> stack;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
				stack.push(s[i]);
			}
			else {
				if (stack.empty() || (stack.top() == '(' && s[i] != ')') 
					|| (s[i] == '}'  && stack.top() != '{')
					|| (s[i] == ']'  && stack.top() != '[')) {
					return false;
				}
				stack.pop();
			}
		}
		return stack.empty();
	}
};

int main() {
	Solution a;
	string s = "((())())";
	cout << a.isValid(s);
	return 0;
}

