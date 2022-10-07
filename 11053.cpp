#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];
int func(int N) {
	dp[0] = 1;
	for (int i = 1; i < N; i++) {
		int tmp = 1;

 		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				if (tmp > dp[j]) continue;
				tmp = max(tmp,dp[j]) + 1;
			}
		}
		dp[i] = tmp;
	}
	int maxLen = dp[0];
	for (int i = 0; i < N; i++) {
		maxLen = dp[i] > maxLen ? dp[i] : maxLen;
	}
	return maxLen;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	for (int i=0; i < N; i++)
		cin >> arr[i];

	cout << func(N);
}