#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
* ---
* Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
**/
int main()
{
	int lightX; // the X position of the light of power
	int lightY; // the Y position of the light of power
	int initialTX; // Thor's starting X position
	int initialTY; // Thor's starting Y position
	cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
	int amtX = initialTX - lightX, amtY = initialTY - lightY;

	// game loop
	while (1) {
		int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
		cin >> remainingTurns; cin.ignore();
		char x = 0, y = 0;
		bool xg, yg;

		if (amtX > 0) {
			x = 'W';
			xg = 1;
			amtX--;
		}
		else if (amtX < 0) {
			x = 'E';
			xg = 1;
			amtX++;
		}
		else {
			xg = 0;
		}

		if (amtY > 0) {
			y = 'N';
			yg = 1;
			amtY--;
		}
		else if (amtY < 0) {
			y = 'S';
			yg = 1;
			amtY++;
		}
		else {
			yg = 0;
		}

		if (xg && yg) {
			cout << y << x << endl;
		}
		else if (xg) {
			cout << x << endl;
		}
		else {
			cout << y << endl;
		}



		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;



	}
}
