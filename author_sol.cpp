#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int zeroes = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '0') {
				// count the number of zero-digits (0)
				zeroes++;
			}
		}
		// calculate the number of one-digits (1)
		int ones = (int) s.size() - zeroes;
		// there are three conditions:
		// 1st condition -> the size of the string must be EVEN
		// 2nd condition -> the occurrences of '0' must NOT be equal to 0 (1s and 0s should exist)
		// 3rd condition -> the occurrences of '1' must NOT be equal to 0 (1s and 0s should exist)
		if ((int) s.size() % 2 == 0 && zeroes > 0 && ones > 0) {
			// calculate the difference of the occurrences of '0' and '1' and divide it by two
			// since in one step of the process, there are two operations done
			cout << abs(zeroes - ones) / 2;
		} else {
			// otherwise, output -1 (impossible)
			cout << -1;
		}
		cout << '\n';
	}
	return 0;
}
