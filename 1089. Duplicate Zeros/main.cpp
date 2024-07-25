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
    void duplicateZeros(vector<int>& arr) {
        int s = arr.size();
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i++;
                arr.resize(s);
            }

        }
    }
};

int main() {
	Solution a;
	vector<int>digits = { 9,0,5,0,4,0};
	a.duplicateZeros(digits);
	return 0;
}

