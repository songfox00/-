#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int arr[26] = { 0, };

	for (int i = 0; i < str.length(); i++) {
		arr[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}