#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (100 * n >= m)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}