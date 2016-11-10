#include <iostream>

using namespace std;

int main()
{
	int n, temps, answer = 10000; // the number of temperatures to analyse
	cin >> n; cin.ignore();
	if (!n) {
		answer = 0;
	}
	while (n--) {
		cin >> temps;
		if (abs(temps) < abs(answer) || (abs(temps) == abs(answer) && temps > 0)) {
			answer = temps;
		}
	}
	cout << answer;

}
