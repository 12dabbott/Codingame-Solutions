#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main()
{
	int N; // the total number of nodes in the level, including the gateways
	int L; // the number of links
	int E; // the number of exit gateways
	int x = 0;
	int EI;
	cin >> N >> L >> E; cin.ignore();
	vector<vector<bool> > connections;
	vector<int> exits;
	connections.resize(N, vector<bool>(N));

	for (int i = 0; i < L; i++) {
		int N1; // N1 and N2 defines a link between these nodes
		int N2;
		cin >> N1 >> N2; cin.ignore();
		connections[N1][N2] = 1;
		connections[N2][N1] = 1;
	}
	for (int i = 0; i < E; i++) {
		//int EI; // the index of a gateway node
		cin >> EI; cin.ignore();
		exits.push_back(EI);
		cerr << exits[i] << " ";

	}

	// game loop
	while (1) {
		int rando;
		int SI; // The index of the node on which the Skynet agent is positioned this turn
		cin >> SI; cin.ignore();
		for (int x = 0; x < connections[SI].size(); x++) {
			int leave = 0;
			if (connections[SI][x] == true) {
				rando = x;
				for (int y = 0; y < exits.size(); y++) {
					if (x == exits[y]) {
						cerr << "FOUND EXIT NODE " << exits[y];
						rando = exits[y];
						leave = 1;
						break;
					}
				}
			}
			if (leave == 1) {
				break;
			}
		}
		connections[SI][rando] = false;
		connections[rando][SI] = false;
		cout << SI << " " << rando << endl;

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;


		// Example: 0 1 are the indices of the nodes you wish to sever the link between
	}
}
