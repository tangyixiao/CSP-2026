#include <bits/stdc++.h>
using namespace std;
long long a[100022], b[100022], x, y, c = -1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> x >> y;
	for (int i = 1; i <= x; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + x + 1);
	if (y == 2) {
		for (int i = x; i >= 1; i--) {
			for (int j = i - 1; j >= 1; j--) {
				if ((a[i]&a[j] ) > c) {
					c = a[i] & a[j];
				}
			}
		}
	} else if (y == 3) {
		for (int i = x; i >= 1; i--) {
			for (int j = i - 1; j >= 1; j--) {
				for (int k = j - 1; k >= 1; k--) {
					if ((a[i]&a[j]&a[k] ) > c) {
						c = a[i] & a[j] & a[k];
					}
				}
			}
		}
	} else if (y == 4) {
		for (int i = x; i >= 1; i--) {
			for (int j = i - 1; j >= 1; j--) {
				for (int k = j - 1; k >= 1; k--) {
					for (int i1 = k - 1; i1 >= 1; i1--) {
						if ((a[i]&a[j]&a[k]&a[i1] ) > c) {
							c = a[i] & a[j] & a[k] & a[i1];
						}
					}
				}
			}
		}
	} else if (y == 5) {
		for (int i = x; i >= 1; i--) {
			for (int j = i - 1; j >= 1; j--) {
				for (int k = j - 1; k >= 1; k--) {
					for (int i1 = k - 1; i1 >= 1; i1--) {
						for (int i2 = i1 - 1; i2 >= 1; i2--) {
							if ((a[i]&a[j]&a[k]&a[i1]&a[i2] ) > c) {
								c = a[i] & a[j] & a[k] & a[i1] & a[i2];
							}
						}
					}
				}
			}
		}
	} else if (y == 6) {
		for (int i = x; i >= 1; i--) {
			for (int j = i - 1; j >= 1; j--) {
				for (int k = j - 1; k >= 1; k--) {
					for (int i1 = k - 1; i1 >= 1; i1--) {
						for (int i2 = i1 - 1; i2 >= 1; i2--) {
							for (int i3 = i2 - 1; i3 >= 1; i3--) {
								if ((a[i]&a[j]&a[k]&a[i1]&a[i2]&a[i3] ) > c) {
									c = a[i] & a[j] & a[k] & a[i1] & a[i2] & a[i3];
								}
							}
						}
					}
				}
			}
		}
	} else {
		c = a[x];
		for (int i = x - 1; i > x - y; i--) {
			c = c &a[i];
		}

	}
	cout << c;
	return 0;
}
