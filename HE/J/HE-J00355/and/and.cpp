#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, ans = INT_MIN;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if(m == 1) {
		for(int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
	} else if(m == 2) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				ans = (ans < a[i] & a[j] ? ans : a[i] & a[j]);
			}
		}
		cout << ans;
	} else if(m == 3) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					ans = (ans < a[i] & a[j] & a[k] ? ans : a[i] & a[j] & a[k]);
				}
			}
		}
		cout << ans;
	} else if(m == 4) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						ans = (ans < a[i] & a[j] & a[k] & a[q] ? ans : a[i] & a[j] & a[k] & a[q]);
					}
				}
			}
		}
		cout << ans;
	} else if(m == 5) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] ? ans : a[i] & a[j] & a[k] & a[q] & a[w]);
						}
					}
				}
			}
		}
		cout << ans;
	} else if(m == 6) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e]);
							}
						}
					}
				}
			}
		}
		cout << ans;
	} else if(m == 7) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r]);
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
	} else if(m == 8) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
	} else if(m == 9) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y]);
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
	} else if(m == 10) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u]);
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
	} else if(m == 11) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o]);
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
	} else if(m == 12) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p]);
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
	} else if(m == 13) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s]);
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
	} else if(m == 14) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]);
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
	} else if(m == 15) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f]);
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
	} else if(m == 16) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	for(int g = f; g <= n; g++) {
																		ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g]);
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
	} else if(m == 17) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	for(int g = f; g <= n; g++) {
																		for(int h = g; h <= n; h++) {
																			ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h]);
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
		}
		cout << ans;
	} else if(m == 18) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	for(int g = f; g <= n; g++) {
																		for(int h = g; h <= n; h++) {
																			for(int l = h; l <= n; l++) {
																				ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l]);
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
			}
		}
		cout << ans;
	} else if(m == 19) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	for(int g = f; g <= n; g++) {
																		for(int h = g; h <= n; h++) {
																			for(int l = h; l <= n; l++) {
																				for(int z = l; z <= n; z++) {
																					ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l] & a[z] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l] & a[z]);
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
				}
			}
		}
		cout << ans;
	} else if(m == 20) {
		for(int i = 1; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				for(int k = j; k <= n; k++) {
					for(int q = k; q <= n; q++) {
						for(int w = q; w <= n; w++) {
							for(int e = w; e <= n; e++) {
								for(int r = e; r <= n; r++) {
									for(int t = r; t <= n; t++) {
										for(int y = t; y <= n; y++) {
											for(int u = y; u <= n; u++) {
												for(int o = u; o <= n; o++) {
													for(int p = o; p <= n; p++) {
														for(int s = p; s <= n; s++) {
															for(int d = s; d <= n; d++) {
																for(int f = d; f <= n; f++) {
																	for(int g = f; g <= n; g++) {
																		for(int h = g; h <= n; h++) {
																			for(int l = h; l <= n; l++) {
																				for(int z = l; z <= n; z++) {
																					for(int x = z; x <= n; x++) {
																						ans = (ans < a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l] & a[z] & a[x] ? ans : a[i] & a[j] & a[k] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d] & a[f] & a[g] & a[h] & a[l] & a[z] & a[x]);
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
					}
				}
			}
		}
		cout << ans;
	}
	
	return 0;
}
