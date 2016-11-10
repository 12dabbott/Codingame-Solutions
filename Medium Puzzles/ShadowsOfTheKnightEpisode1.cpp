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

int main()
{
	int W; // width of the building.
	int H; // height of the building.
	cin >> W >> H; cin.ignore();
	int minX = 0, minY = 0, maxX = W - 1, maxY = H - 1;
	int N; // maximum number of turns before game over.
	cin >> N; cin.ignore();
	int X0;
	int Y0;
	int lastX, lastY, X, Y;
	cin >> X0 >> Y0; cin.ignore();
	X = X0, Y = Y0;

	// game loop
	while (1) {
		string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
		cin >> bombDir; cin.ignore();
		if (bombDir == "U") {
			maxY = Y - 1;
			minX = X, maxX = X;
		}
		else if (bombDir == "D") {
			minY = Y + 1;
			minX = X, maxX = X;
		}
		else if (bombDir == "L") {
			maxX = X - 1;
			minY = Y, maxY = Y;
		}
		else if (bombDir == "R") {
			minX = X + 1;
			minY = Y, maxY = Y;
		}
		else if (bombDir == "UR") {
			minX = X + 1;
			maxY = Y - 1;
		}
		else if (bombDir == "UL") {
			maxY = Y - 1;
			maxX = X - 1;
		}
		else if (bombDir == "DR") {
			minY = Y + 1;
			minX = X + 1;
		}
		else if (bombDir == "DL") {
			minY = Y + 1;
			maxX = X - 1;
		}
		X = floor((minX + maxX) / 2);
		Y = floor((minY + maxY) / 2);

		cout << X << " " << Y << endl;




		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;


		// the location of the next window Batman should jump to.
	}
}
