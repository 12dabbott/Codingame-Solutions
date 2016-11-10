#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int letter(char x)
{
	return (int)x - 97;
}

int main()
{
	int L, H, A;
	cin >> L >> H; cin.ignore();
	string T;
	getline(cin, T);

	vector<int> let;
	transform(T.begin(), T.end(), T.begin(), ::tolower);
	for (int x = 0; x < T.length(); x++) {
		let.push_back((letter((T[x])) * L));
		if (let[x] < 0 || let[x] > 26 * L) {
			let[x] = 26 * L;
		}
	}
	for (int i = 0; i < H; i++) {
		string ROW;
		getline(cin, ROW);
		for (int x = 0; x < T.length(); x++) {
			for (int y = 0; y < L; y++) {
				A = let[x];
				cout << ROW.at(A + y);
			}

		}
		cout << endl;
	}




	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

}
