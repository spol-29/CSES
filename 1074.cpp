#include <bits/stdc++.h>
using namespace std;

int n, median;
vector<int> p;
long long ans, cnt;

void solve() {
	cin >> n;
	p.resize(n);
	for (int &x : p) { cin >> x; }
	sort(p.begin(), p.end());
	median = p[n / 2];
	for (const int &x : p) {
		ans += abs(median - x);
	}
	cout << ans << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}