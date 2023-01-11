#include<iostream>

using namespace std;

int main() {
	int t,k, n;
	cin >> t;
	int dp[15][15];
	
	for(int i=1;i<=14;i++){
		dp[0][i]=i;
		dp[i][0]=0;
	}
	
	for(int i=1;i<=14;i++){
		for(int j=1;j<=14;j++){
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
		}
	}
	
	while (t--) {
		cin >> k >> n;
		
		cout << dp[k][n] << '\n';
	}
	return 0;
}