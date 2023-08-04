Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) {
			return false;
		}
		string s = to_string(x);
		int left = 0, right = s.length() - 1;
		while (left < right) {
			if (s[left] != s[right]) {
				return false;
			}
			left++;
			right--;
		}
		return true;
	}

};