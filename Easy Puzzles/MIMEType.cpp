#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int N, Q; // Number of elements which make up the association table.
	cin >> N >> Q; cin.ignore();
	map<string, string> mymap;
	for (int i = 0; i < N; i++) {
		string EXT, MT;
		cin >> EXT >> MT; cin.ignore();
		transform(EXT.begin(), EXT.end(), EXT.begin(), ::tolower);
		mymap[EXT] = MT;
	}
	for (int i = 0; i < Q; i++) {
		string FNAME, file; // One file name per line.
		getline(cin, FNAME);
		transform(FNAME.begin(), FNAME.end(), FNAME.begin(), ::tolower);
		int extnum = 0;
		if (FNAME.rfind('.') == -1) {
			cout << "UNKNOWN" << endl;
		}
		else {
			extnum = (FNAME.rfind('.') + 1);
			for (extnum; extnum < FNAME.length(); extnum++) {
				file += FNAME[extnum];
			}


			if (mymap.find(file) == mymap.end()) {
				cout << "UNKNOWN" << endl;
			}
			else {
				cout << mymap.find(file)->second << endl;
			}
		}
	}

}
