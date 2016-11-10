#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int road; // the length of the road before the gap.
	cin >> road; cin.ignore();
	int gap; // the length of the gap.
	cin >> gap; cin.ignore();
	int platform; // the length of the landing platform.
	cin >> platform; cin.ignore();
	int j = 1;

	// game loop
	while (1) {
		int speed; // the motorbike's speed.
		cin >> speed; cin.ignore();
		int coordX; // the position on the road of the motorbike.
		cin >> coordX; cin.ignore();
		int pos = road - coordX;
		int sn = gap + 1;
		if (speed < sn && pos > 0) {
			cout << "SPEED" << endl;
		}
		else if (pos < 0 || speed > sn) {
			cout << "SLOW" << endl;
		}
		else if (pos > speed) {
			cout << "WAIT" << endl;
		}
		else {
			cout << "JUMP" << endl;
		}


		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;


		// A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
	}
}
