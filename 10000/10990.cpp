#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n - i - 1; j++) {
			cout << " ";
		}
		cout << '*';

		if (i == 0) {
			cout << endl;
			continue;
		}

		for (int j = 0; j<i * 2 - 1; j++) {
			cout << " ";
		}
		cout << '*' << endl;
	}

	return 0;
}
