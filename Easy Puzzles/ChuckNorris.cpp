#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;


int main()
{
	int first = 1;
	char curnum = '2';
	string MESSAGE, bin;
	getline(cin, MESSAGE);

	for (int x = 0; x < MESSAGE.length(); x++) {
		bitset<7> a(MESSAGE[x]);
		bin += a.to_string();
	}
	for (int x = 0; x < bin.length(); x++) {
		if (bin[x] != curnum) {
			if (bin[x] == '0' && first == 1) {
				cout << "00 0";
				curnum = '0';
				first = 0;
			}
			else if (bin[x] == '1' && first == 1) {
				cout << "0 0";
				curnum = '1';
				first = 0;
			}
			else if (bin[x] == '0' && first == 0) {
				cout << " 00 0";
				curnum = '0';
			}
			else {
				cout << " 0 0";
				curnum = '1';
			}
		}
		else {
			cout << "0";
		}
	}

}
