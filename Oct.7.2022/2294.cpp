// µ¿Àü2
#include <iostream>
using namespace std;
#define NMAX 101
#define KMAX 10001

int coin[NMAX];
int dp[KMAX];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];	// [1,5,12]
	}
	fill(dp + 1, dp + k + 1, KMAX); dp[0] = 0;	// [0,max,max,max,max,max,max..]
	

}

















































//int coin[NMAX], dp[KMAX];
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> coin[i];
//	}
//
//	fill(dp + 1, dp + k + 1, KMAX);
//	dp[0] = 0;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = coin[i]; j <= k; j++) {
//			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
//		}
//	}
//
//	if (dp[k] == KMAX) {
//		cout << -1;
//	}
//	else {
//		cout << dp[k];
//	}
//}