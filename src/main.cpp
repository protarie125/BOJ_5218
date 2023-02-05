#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t; cin >> t;
	while (0 < (t--)) {
		cout << "Distances: ";

		string a, b; cin >> a >> b;
		const auto& n = a.length();
		for (auto i = 0; i < n; ++i) {
			const auto& x = a[i];
			const auto& y = b[i];

			if (x <= y) {
				cout << y - x;
			}
			else {
				cout << (y + 26) - x;
			}
			cout << ' ';
		}

		cout << '\n';
	}

	return 0;
}