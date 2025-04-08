#include<iostream>

using namespace std;
int coin[101];
int D[10001];


int main(void) {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> coin[i];

	D[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=k; j++) {
			if(j>=coin[i]) D[j] += D[j - coin[i]];
		}
	}
	cout << D[k];

	return 0;
}