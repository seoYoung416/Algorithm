// 연속합
#include <iostream>
using namespace std;

int arr[100001];
int dp[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = arr[0];	// dp 초기값 설정
	int maxSum = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i],arr[i] + dp[i - 1]);

		if (dp[i] > maxSum)
			maxSum = dp[i];
	}
	cout << maxSum;
}
