// 파도반 수열
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long db[101] = { 0,1,1, };	// 초기값 설정

	int tCase; cin >> tCase;
	int N;

	for (int i = 0; i < tCase; i++) {
		cin >> N;

		for (int j = 3; j <= N; j++)
			db[j] = db[j - 2] + db[j - 3];

		cout << db[N] << '\n';
	}
}