//파도반 수열
//#include <iostream>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	long long db[101] = { 0,1,1, };	// 초기값 설정
//
//	int tCase; cin >> tCase;
//	int N;
//
//	for (int i = 0; i < tCase; i++) {
//		cin >> N;
//
//		for (int j = 3; j <= N; j++)
//			db[j] = db[j - 2] + db[j - 3];
//
//		cout << db[N] << '\n';
//	}
//}

// 분명히 테스트케이스도 맞고, 점화식도 맞는데 틀리는 경우는 무조건 자료형을 의심해야한다.
// 피보나치 수열의 값은 N이 커짐에 따라 빠르게 증가하므로, 반드시 long long 자료형을 사용해야한다.