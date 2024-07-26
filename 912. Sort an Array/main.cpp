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
	vector<int> sortArray(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		return nums;
	}
};

int main() {
	Solution a;
	vector<int>digits = { 9,0,5,0,4,0};
	a.sortArray(digits);
	return 0;
}

