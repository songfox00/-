#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;

			cout << a + b << ' ' << a*b << '\n';
		}
	}

	return 0;
}