// LCS
#include <iostream>
using namespace std;

//탑다운 방식

int dp[1001][1001];
string s1, s2;
int func(int i, int j) {
	if (i==0 || j==0) return 0;	// 기저값 설정
	if (dp[i][j] != -1) return dp[i][j];	// 메모이제이션

	if (s1[i] == s2[j])	return dp[i][j] = func(i-1,j-1)+1;
	return dp[i][j] = max(func(i, j - 1), func(i - 1, j));
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++)
			dp[i][j] = -1;
	}
	cin >> s1 >> s2;

	cout << func(s1.length(), s2.length());
}
