#include<iostream>
#include<cmath>
#define PI 3.14159265358979

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a1, p1, r1, p2; ;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a1 >> p1 >> r1 >> p2;

		double sliced = (double)a1 / p1,
			whole = (double)(PI * pow(r1, 2)) / p2;
		if (sliced > whole) 
			cout << "Slice of pizza\n";
		else 
			cout << "Whole pizza\n";
	}

	return 0;
}