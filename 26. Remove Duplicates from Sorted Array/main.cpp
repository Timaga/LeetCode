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
	int removeDuplicates(vector<int>& nums) {
		set<int> a = {};
		for (int i = 0; i < nums.size(); i++) {
			a.insert(nums[i]);
		}
		nums.clear();
		for (auto it = a.begin(); it != a.end(); ++it) {
			nums.push_back(*it);
		}
		return a.size();
	}
};

int main() {
	Solution a;
	
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	cout << a.removeDuplicates(nums);
	return 0;
}

