#include <iostream>
using namespace std;

//���Ҿ� ���
/*long long dp[91];
int main() {
	int n; cin >> n;

	dp[0] = 0, dp[1] = 1;	// �ʱⰪ ����
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	cout << dp[n];
}*/

//ž�ٿ� ���
/*long long db[46];
long long fibo(int n) {
	db[0] = 0, db[1] = 1;
	if (db[n] != -1) return db[n];

	db[n] = fibo(n - 1) + fibo(n - 2);
	return db[n];
}

int main() {
	int n; cin >> n;
	fill(db, db + n + 1, -1);
	cout << fibo(n);
}*/