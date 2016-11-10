#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, N2;
	vector<int> pi;
	cin >> N; cin.ignore();
	while (N--) {
		int a;
		cin >> a; cin.ignore();
		pi.push_back(a);
	}
	sort(pi.begin(), pi.end());
	int minDiff = pi[1] - pi[0];
	for (int x = 1; x != pi.size(); x++) {
		minDiff = min(minDiff, pi[x] - pi[x - 1]);

	}

	cout << minDiff << endl;
}
