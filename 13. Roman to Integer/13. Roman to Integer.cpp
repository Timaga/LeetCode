Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

class Solution {
public:
    int romanToInt(string s) {
		int number=0;
		vector<char> digit;
			for (char c : s) {
				digit.push_back(c);
			}
			for (int i = 0; i < digit.size();i++) {
				if (digit.at(i)=='I'){
					number++;
				}
				if (digit.at(i) == 'V') {
					number = number + 5;
				}
				if (digit.at(i) == 'X') {
					number = number + 10;
				}
				if (digit.at(i) == 'L') {
					number = number + 50;
				}
				if (digit.at(i) == 'C') {
					number = number + 100;
				}
				if (digit.at(i) == 'D') {
					number = number + 500;
				}
				if (digit.at(i) == 'M') {
					number = number + 1000;
				}
				if (digit.size() > 1 && i != 0 && i  != digit.size()) {
					if ((digit.at(i) == 'V' || digit.at(i) == 'X') && digit.at(i - 1) == 'I') {
						number=number-2;
					}
					
					if ((digit.at(i) == 'L' || digit.at(i) == 'C') && digit.at(i - 1) == 'X') {
						number=number-20;
					}
					
					if ((digit.at(i) == 'D' || digit.at(i) == 'M') && digit.at(i - 1) == 'C') {
						number = number - 200;
					}
				
				}
			}
			return number;
	}
};