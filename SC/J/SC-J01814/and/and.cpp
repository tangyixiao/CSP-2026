#include <iostream>
#include <algorithm>
using namespace std;
int _and(int n, int m, int arr[200005]) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[j + 1]) {
				int x = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = x;
			}
		}
	}
	int ans = arr[0];
	for (int i = 0; i < m; i++) {
		cout << arr[i] << " ";
		ans &= arr[i];
	}
	return ans;
}
int main() {
	int n, m, arr[200005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << _and(n, m, arr);
	return 0;
}