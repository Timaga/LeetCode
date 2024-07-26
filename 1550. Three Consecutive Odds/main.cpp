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
	bool threeConsecutiveOdds(vector<int>& arr) {
		int count = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (count == 3) {
				return true;
			}
			if (arr[i] % 2 != 0) {
				count++;
			}
			else if (arr[i] == 1) {
				count++;
			}
			else {
				count = 0;
			}
		}
		if (count == 3) {
			return true;
		}
		return false;
	}
};

int main() {
	Solution a;
	vector<int>digits = { 1,1,1};
	cout<<a.threeConsecutiveOdds(digits);
	return 0;
}

