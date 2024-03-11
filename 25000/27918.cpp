#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;

		if (c == 'D') {
			cnt1++;
		}
		else {
			cnt2++;
		}

		if (cnt1 + 2 == cnt2 || cnt1 == cnt2 + 2)
			break;
	}

	cout << cnt1 << ':' << cnt2;

	return 0;
}