#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;


void findNextRight(map<int, string> &temp, map<int, string>::iterator &it) {
	size_t pos = it->second.find('0');
	if (pos != string::npos) {
		cout << pos << " " << it->first << " ";
	}
	else {
		cout << "-1 -1 ";
	}

}

void findNextBottom(map<int, string> &temp, map<int, string>::iterator it, size_t pos) {
	int found = 2;
	for (it; it != temp.end(); it++) {
		if (it->second[pos] == '0') {
			cout << pos << " " << it->first << " ";
			found = 1;
			break;
		}
		else {
			found = 0;
		}
	}
	if (found == 0) {
		cout << "-1 -1 ";
	}
}

int main()
{
	int width; // the number of cells on the X axis
	cin >> width; cin.ignore();
	int height; // the number of cells on the Y axis
	cin >> height; cin.ignore();
	map<int, string> info;
	map<int, string>::iterator it;
	for (int i = 0; i < height; i++) {

		string line; // width characters, each either 0 or .
		getline(cin, line);
		info[i] = line;

	}

	for (it = info.begin(); it != info.end(); ++it) {
		size_t pos = it->second.find('0');
		while (pos != string::npos) {
			cout << pos << " " << it->first << " ";
			it->second[pos] = '.';
			findNextRight(info, it);
			findNextBottom(info, it, pos);
			pos = it->second.find('0');
			cout << endl;
		}

	}



	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


	// Three coordinates: a node, its right neighbor, its bottom neighbor
}
