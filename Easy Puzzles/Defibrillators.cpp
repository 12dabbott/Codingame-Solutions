#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	string LON, LAT;
	int answer, N;
	double min = 1000, latb, lonb;
	vector<string> location;
	vector<double> distance;
	cin >> LON; cin.ignore();
	cin >> LAT; cin.ignore();
	replace(LAT.begin(), LAT.end(), ',', '.');
	replace(LON.begin(), LON.end(), ',', '.');
	cerr << LON << " " << LAT << endl;

	cerr << (LON * 3.14 / 180) << " " << (LAT * 3.14 / 180) << endl;
	string sep = ";";
	cin >> N; cin.ignore();
	for (int i = 0; i < N; i++) {
		string DEFIB, token;
		getline(cin, DEFIB);
		replace(DEFIB.begin(), DEFIB.end(), ',', '.');
		stringstream ss(DEFIB);
		int count = 0;
		while (getline(ss, token, ';')) {
			if (count == 1) {
				location.push_back(token);
			}
			else if (count == 4) {
				lonb = stod(token);
			}
			else if (count == 5) {
				latb = stod(token);
			}
			count++;
		}
		double x, y;
		cerr << lonb << " " << latb << endl;
		lonb
			cerr << lonb << " " << latb << endl;
		x = (lonb - stod(LON)) * cos((latb + stod(LAT)) / 2);
		cerr << x << endl;
		y = (latb - stod(LAT));
		cerr << y << endl;
		distance.push_back(sqrt((x*x) + (y*y)) * 6371);
		cerr << distance[i] << endl;
	}

	for (int i = 0; i < distance.size(); i++) {
		if (distance[i] < min) {
			min = distance[i];
			answer = i;
		}
	}
	cout << location[answer];
	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

}
