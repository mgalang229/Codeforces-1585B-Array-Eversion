#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// count the number of switches of maximum element starting
		// from the last element of the sequence (excluding the max element)
		int mx = 0;
		int ans = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] > mx) {
				mx = a[i];
				ans++;
			}
		}
		cout << ans - 1 << '\n';
	}
	return 0;
}
