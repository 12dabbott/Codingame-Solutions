#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string cs(string answer) {
	int num = 1, i = 0;
	answer.erase(remove(answer.begin(), answer.end(), ' '), answer.end());
	string new_answer;
	if (answer.length() == 1) {
		new_answer = "1 " + answer;
	}
	else {
		while (i < answer.length()) {
			int found = answer.find_first_not_of(answer[i]);
			if (found != string::npos) {
				num = abs(found - i);
				new_answer += to_string(num) + " " + answer[i] + " ";
				answer.erase(0, found);
				i = 0;
			}
			else {
				int found = answer.rfind(answer[i]);
				if (found != string::npos) {
					num = abs(found - i) + 1;
					new_answer += to_string(num) + " " + answer[i];
					answer.clear();
					i = 0;
				}
			}
		}
	}
	return new_answer;
}
int main()
{
	int R;
	cin >> R; cin.ignore();
	int L;
	cin >> L; cin.ignore();
	vector<string> answer;
	string start = to_string(R);
	answer.push_back(start);

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;
	for (unsigned int i = 1; i < L; i++) {
		start = cs(start);
		answer.push_back(start);
	}
	cout << answer[L - 1] << endl;
}
