// 이동하기
#include <iostream>
#include <algorithm>
using namespace std;

//탑다운
int arr[1001][1001];	// 사탕의 개수
int dp[1001][1001];
int func(int N, int M) {
	if (dp[N][M] != -1) return dp[N][M];
	return dp[N][M] = max({ func(N - 1,M - 1),func(N - 1,M),func(N,M - 1)}) + arr[N][M];
}

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++){
			cin >> arr[i][j];
			dp[i][j] = -1;
		}
	}
	cout << func(N, M);
}

//바텀업
//int arr[1001][1001];	// 사탕의 개수
//int dp[1001][1001];
//int main() {
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> arr[i][j];
//			dp[i][j] = -1;
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++)
//			dp[i][j] = max({ dp[i - 1][j - 1],dp[i - 1][j],dp[i][j - 1] }) + arr[i][j];
//	}
//	cout << dp[N][M];
//}