//#include <iostream>
//using namespace std;
//
////바텀업 방식
//int dp[46];
//int main() {
//	int n; cin >> n;
//
//	dp[0] = 0, dp[1] = 1;	// 초기값 설정
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 2] + dp[i - 1];
//	}
//	cout << dp[n];
//}

//탑다운 방식
/*int db[46];
int fibo(int n) {
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

//시간 초과!
/*int fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}
int main() {
	int n;
	cin >> n;
	cout << fibo(n);
}*/
