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
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size() && nums[i] < target) {
            i++;
        }
        return i;
    }
};

int main() {
	Solution a;
	vector<int> nums = { 1,3,5,6 }; int target = 7;
	
	cout << a.searchInsert(nums, target);
	return 0;
}

