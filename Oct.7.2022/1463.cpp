// 1�� �����
#include <iostream>
using namespace std;

int dp[1000001];	// dp[n]: n�� 1�� �Ǵ� ������ �ּ� Ƚ��
int func(int N) {
	dp[1] = 0;	// �ʱⰪ ����
	if (dp[N] != -1) return dp[N];	// ����� ���� �ִٸ�

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
	fill(dp, dp + N + 1, -1);	// �迭 dp�� -1�� �ʱ�ȭ
	cout << func(N);
}