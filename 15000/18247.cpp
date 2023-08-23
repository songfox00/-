#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		if (n < 12 || m < 4)
			cout << -1 << '\n';
		else
			cout << 11 * m + 4 << '\n';
	}
	return 0;
}