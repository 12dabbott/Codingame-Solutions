#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int W; // number of columns.
	int H; // number of rows.
	map<pair <int, int>, int> grid;
	cin >> W >> H; cin.ignore();
	for (int i = 0; i < H; i++) {
		string LINE; // represents a line in the grid and contains W integers. Each integer represents one room of a given type.
		getline(cin, LINE);
		cerr << LINE << endl;
		stringstream ss(LINE);
		for (int x = 0; x < W; x++)
		{
			string token;
			ss >> token;
			grid[{x, i}] = stoi(token);
		}


	}
	int EX; // the coordinate along the X axis of the exit (not useful for this first mission, but must be read).
	cin >> EX; cin.ignore();
	// game loop
	while (1) {
		int XI;
		int YI;
		string POS;
		cin >> XI >> YI >> POS; cin.ignore();
		cerr << XI << YI << endl;
		cerr << POS << endl;
		switch (grid[{XI, YI}]) {
		case 3: cout << XI << " " << YI + 1 << endl;
			break;
		case 11: cout << XI + 1 << " " << YI << endl;
			break;
		case 2: if (POS == "LEFT") {
			cout << XI + 1 << " " << YI << endl;
		}
				else {
					cout << XI - 1 << " " << YI << endl;
				}
				break;
		case 13: cout << XI << " " << YI + 1 << endl;
			break;
		case 10: cout << XI - 1 << " " << YI << endl;
			break;
		case 12: cout << XI << " " << YI + 1 << endl;
			break;
		case 8: cout << XI << " " << YI + 1 << endl;
			break;
		case 1: cout << XI << " " << YI + 1 << endl;
			break;
		case 7: cout << XI << " " << YI + 1 << endl;
			break;
		case 4: if (POS == "RIGHT") {
			cout << XI << " " << YI + 1 << endl;
		}
				else {
					cout << XI - 1 << " " << YI << endl;
				}
				break;
		case 5: if (POS == "TOP") {
			cout << XI + 1 << " " << YI << endl;
		}
				else {
					cout << XI << " " << YI + 1 << endl;
				}
				break;
		case 6: if (POS == "LEFT") {
			cout << XI + 1 << " " << YI << endl;
		}
				else {
					cout << XI - 1 << " " << YI << endl;
				}
				break;
		case 9: cout << XI << " " << YI + 1 << endl;
			break;
		}

	}
}
