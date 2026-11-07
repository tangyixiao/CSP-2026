#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int ans = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 0; i < n; i++) {
			ans = max(ans, a[i]);
		}
	}
	if (m == 2) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				ans = max(ans, (a[i] & a[j]));


			}
		}
	}
	if (m == 3) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					ans = max(ans, (a[i] & a[j] & a[k]));
				}



			}
		}
	}
	if (m == 4) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s < n; s++) {
						ans = max(ans, (a[i] & a[j] & a[k] & a[s]));
					}

				}



			}
		}
	}
	if (m == 5) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s < n; s++) {
						for (int q = s + 1; q < n; q++) {
							ans = max(ans, (a[i] & a[j] & a[k] & a[s] & a[q]));
						}

					}

				}



			}
		}
	}
	if (m == 6) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s < n; s++) {
						for (int q = s + 1; q < n; q++) {
							for (int y = q + 1; y < n; y++) {
								ans = max(ans, (a[i] & a[j] & a[k] & a[s] & a[q] & a[y]));
							}

						}

					}

				}



			}
		}
	}
	if (m == 7) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s < n; s++) {
						for (int q = s + 1; q < n; q++) {
							for (int y = q + 1; y < n; y++) {
								for (int z = y + 1; z < n; z++) {
									ans = max(ans, (a[i] & a[j] & a[k] & a[s] & a[q] & a[y] & a[z]));
								}

							}

						}

					}

				}



			}
		}
	}
	if (m == 8) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s < n; s++) {
						for (int q = s + 1; q < n; q++) {
							for (int y = q + 1; y < n; y++) {
								for (int z = y + 1; z < n; z++) {
									for (int w = z + 1; w < n; w++) {
										ans = max(ans, (a[i] & a[j] & a[k] & a[s] & a[q] & a[y] & a[z] & a[w]));
									}

								}

							}

						}

					}

				}



			}
		}
	}
	cout << ans;
	return 0;
}
