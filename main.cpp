#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto b = vi(n);
	for (auto i = 0; i < n; ++i) {
		cin >> b[i];
	}

	auto mx = int{ 0 };
	auto ans = int{ 0 };
	for (auto i = n - 1; 0 <= i; --i) {
		if (mx < b[i]) {
			++ans;
			mx = b[i];
		}
	}

	cout << ans;

	return 0;
}