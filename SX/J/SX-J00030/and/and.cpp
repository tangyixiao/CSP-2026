#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 2e5+10;
long long a[MAXN], n, m, ans = -1, temp;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (long long i = 1; i <= n; i++) {
		for (long long j = i + 1; j <= n; j++) {
			if (m > 2) {
				for (long long k = j + 1; k <= n; k++) {
					if (m > 3) {
						for (long long o = k + 1; o <= n; o++) {
							if (m > 4) {
								for (long long l = o + 1; l <= n; l++) {
									if (m > 5) {
										for (long long p = l + 1; p <= m; p++) {
											if (m > 6) {
												for (long long q = p + 1; q <= m; q++) {
													if (m > 7) {
														for (long long z = q + 1; z <= m; z++) {
															if (m > 8) {
																for (long long w = z + 1; w <= m; w++) {
																	if (m > 9) {
																		for (long long s = w + 1; s <= m; s++) {
																			if (m > 10) {
																				for (long long x = s + 1; x <= m; x++) {
																					if (m > 11) {
																						for (long long e = x + 1; e <= m; e++) {
																							if (m > 12) {

																							} else {
																								temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q] & a[z] & a[w] & a[s] & a[x] & a[e];
																								ans = max(temp, ans);
																							}
																						}
																					} else {
																						temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q] & a[z] & a[w] & a[s] & a[x];
																						ans = max(temp, ans);
																					}
																				}
																			} else {
																				temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q] & a[z] & a[w] & a[s];
																				ans = max(temp, ans);
																			}
																		}
																	} else {
																		temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q] & a[z] & a[w];
																		ans = max(temp, ans);
																	}
																}
															} else {
																temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q] & a[z];
																ans = max(temp, ans);
															}
														}
													} else {
														temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p] & a[q];
														ans = max(temp, ans);
													}
												}
											} else {
												temp = a[i] & a[j] & a[k] & a[o] & a[l] & a[p];
												ans = max(temp, ans);
											}
										}
									} else {
										temp = a[i] & a[j] & a[k] & a[o] & a[l];
										ans = max(temp, ans);
									}
								}
							} else {
								temp = a[i] & a[j] & a[k] & a[o];
								ans = max(temp, ans);
							}
						}
					} else {
						temp = a[i] & a[j] & a[k];
						ans = max(temp, ans);
					}
				}
			} else {
				temp = a[i] & a[j];
				ans = max(temp, ans);
			}
		}
	}
	cout << ans;
	return 0;
}
