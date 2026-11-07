#include <iostream>
#include <algorithm>
using namespace std;
void card(int n, int m, int arr[500005]) {
	int x = 0;
	bool is_unrepetitive;
	int arr2[m + 5], judge[m + 5];
	for (int i = x; i < n; i++) {
		for (int j = x; j < n; j++) {
			judge[arr[x]]++;
			if (judge[arr[x]] > 1) {
				is_unrepetitive = false;
				break;
			} else {
				is_unrepetitive = true;
			}
		}
		if (arr[x] != arr[n - 1]) {
			arr2[arr[x]]++;
			arr2[arr[n - 1]]++;
		} else {
			arr2[arr[x]]++;
		}
		if (is_unrepetitive == 1) {
			for (int i = x + 1; i < n - 1; i++) {
				arr2[i]++;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << arr2[i] << " ";
	}
}
int main() {
	int n, m, arr[500005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	card(n, m, arr);
	return 0;
}