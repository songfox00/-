#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (c >= a && c < b)
		cout << 1;
	else
		cout << 0;

	return 0;
}