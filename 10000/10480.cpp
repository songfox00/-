#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	cin >> n;

	while (n--) {
		cin >> x;

		if (x % 2 == 0)
			cout << x << " is even\n";
		else
			cout << x << " is odd\n";
	}

	return 0;
}