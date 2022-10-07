// 1로 만들기
#include <iostream>
using namespace std;

int dp[1000001];	// dp[n]: n이 1이 되는 연산의 최소 횟수
int func(int N) {
	dp[1] = 0;	// 초기값 설정
	if (dp[N] != -1) return dp[N];	// 계산한 적이 있다면

	int ans = func(N - 1) + 1;
	
	if (N % 3 == 0)
		ans = min(ans, func(N / 3) + 1);
	if (N % 2 == 0) 
		ans = min(ans, func(N / 2) + 1);	
	return dp[N] = ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	fill(dp, dp + N + 1, -1);	// 배열 dp를 -1로 초기화
	cout << func(N);
}