#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	int result = n * (n + 1) * (n + 2) / 2;

	cout << result << "\n";

	return 0;
}