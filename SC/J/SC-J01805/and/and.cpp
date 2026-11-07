#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,m,a[200005],ans;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	if(m == n) {
		ans = a[1];
		for(int i = 2;i <= n;i++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 1) {
		for(int i = 1;i <= n;i++) {
			ans = max(ans,a[i]);
		}
		cout << ans;
	}
	if(m == 2) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout << ans;
	}
	if(m == 3) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					ans = max(ans,a[i] & a[j] & a[k]);
				}
			}
		}
		cout << ans;
	}
	if(m == 4) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						ans = max(ans,a[i] & a[j] & a[k] & a[l]);
					}
				}
			}
		}
		cout << ans;
	}
	if(m == 5) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b]);
						}
					}
				}
			}
		}
		cout << ans;
	}
	if(m == 6) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c]);
							}
						}
					}
				}
			}
		}
		cout << ans;
	}
	if(m == 7) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d]);
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
	}
	if(m == 8) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
	}
	if(m == 9) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f]);
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
	}
	if(m == 10) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g]);
											}
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
	}
	if(m == 11) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h]);
												}
											}
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
	}
	if(m == 12) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													for(int o = 1;o <= n;o++) {
														if(i == o || j == o || k == o || l == o || b == o || c == o || d == o || e == o || f == o || g == o || h == o) {
															continue;
														}
														ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[o]);
													}
												}
											}
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
	}
	if(m == 13) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													for(int o = 1;o <= n;o++) {
														if(i == o || j == o || k == o || l == o || b == o || c == o || d == o || e == o || f == o || g == o || h == o) {
															continue;
														}
														for(int p = 1;p <= n;p++) {
															if(i == p || j == p || k == p || l == p || b == p || c == p || d == p || e == p || f == p || g == p || h == p || o == p) {
																continue;
															}
															ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[o] & a[p]);
														}
													}
												}
											}
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
	}
	if(m == 14) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													for(int o = 1;o <= n;o++) {
														if(i == o || j == o || k == o || l == o || b == o || c == o || d == o || e == o || f == o || g == o || h == o) {
															continue;
														}
														for(int p = 1;p <= n;p++) {
															if(i == p || j == p || k == p || l == p || b == p || c == p || d == p || e == p || f == p || g == p || h == p || o == p) {
																continue;
															}
															for(int q = 1;q <= n;q++) {
																if(i == q || j == q || k == q || l == q || b == q || c == q || d == q || e == q || f == q || g == q || h == q || o == q || p == q) {
																	continue;
																}
																ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[o] & a[p] & a[q]);
															}
														}
													}
												}
											}
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
	}
	if(m == 15) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													for(int o = 1;o <= n;o++) {
														if(i == o || j == o || k == o || l == o || b == o || c == o || d == o || e == o || f == o || g == o || h == o) {
															continue;
														}
														for(int p = 1;p <= n;p++) {
															if(i == p || j == p || k == p || l == p || b == p || c == p || d == p || e == p || f == p || g == p || h == p || o == p) {
																continue;
															}
															for(int q = 1;q <= n;q++) {
																if(i == q || j == q || k == q || l == q || b == q || c == q || d == q || e == q || f == q || g == q || h == q || o == q || p == q) {
																	continue;
																}
																for(int r = 1;r <= n;r++) {
																	if(i == r || j == r || k == r || l == r || b == r || c == r || d == r || e == r || f == r || g == r || h == r || o == r || p == r || q == r) {
																		continue;
																	}
																	ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[o] & a[p] & a[q] & a[r]);
																}
															}
														}
													}
												}
											}
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
	}
	if(m == 16) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) {
					continue;
				}
				for(int k = 1;k <= n;k++) {
					if(i == k || j == k) {
						continue;
					}
					for(int l = 1;l <= n;l++) {
						if(i == l || j == l || k == l) {
							continue;
						}
						for(int b = 1;b <= n;b++) {
							if(i == b || j == b || k == b || l == b) {
								continue;
							}
							for(int c = 1;c <= n;c++) {
								if(i == c || j == c || k == c || l == c || b == c) {
									continue;
								}
								for(int d = 1;d <= n;d++) {
									if(i == d || j == d || k == d || l == d || b == d || c == d) {
										continue;
									}
									for(int e = 1;e <= n;e++) {
										if(i == e || j == e || k == e || l == e || b == e || c == e || d == e) {
											continue;
										}
										for(int f = 1;f <= n;f++) {
											if(i == f || j == f || k == f || l == f || b == f || c == f || d == f || e == f) {
												continue;
											}
											for(int g = 1;g <= n;g++) {
												if(i == g || j == g || k == g || l == g || b == g || c == g || d == g || e == g || f == g) {
													continue;
												}
												for(int h = 1;h <= n;h++) {
													if(i == h || j == h || k == h || l == h || b == h || c == h || d == h || e == h || f == h || g == h) {
														continue;
													}
													for(int o = 1;o <= n;o++) {
														if(i == o || j == o || k == o || l == o || b == o || c == o || d == o || e == o || f == o || g == o || h == o) {
															continue;
														}
														for(int p = 1;p <= n;p++) {
															if(i == p || j == p || k == p || l == p || b == p || c == p || d == p || e == p || f == p || g == p || h == p || o == p) {
																continue;
															}
															for(int q = 1;q <= n;q++) {
																if(i == q || j == q || k == q || l == q || b == q || c == q || d == q || e == q || f == q || g == q || h == q || o == q || p == q) {
																	continue;
																}
																for(int r = 1;r <= n;r++) {
																	if(i == r || j == r || k == r || l == r || b == r || c == r || d == r || e == r || f == r || g == r || h == r || o == r || p == r || q == r) {
																		continue;
																	}
																	for(int s = 1;s <= n;s++) {
																		if(i == s || j == s || k == s || l == s || b == s || c == s || d == s || e == s || f == s || g == s || h == s || o == s || p == s || q == s || r == s) {
																			continue;
																		}
																		ans = max(ans,a[i] & a[j] & a[k] & a[l] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[o] & a[p] & a[q] & a[r] & a[s]);
																	}
																}
															}
														}
													}
												}
											}
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
	}
	return 0;
}