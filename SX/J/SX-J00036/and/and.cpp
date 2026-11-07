#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], v, mmax;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (m == n) {
		cin >> a[1];
		v = a[1];
		for (int i = 2; i <= n; i++) {
			cin >> a[i];
			v = v &a[i];
		}
		cout << v;
		return 0;
	}
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		for (int i = 1; i <= n; i++)
			mmax = max(mmax, a[i]);
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				mmax = max(mmax, a[i] & a[j]);
			}
		}
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					mmax = max(mmax, a[i] & a[j] & a[k]);
				}
			}
		}
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						mmax = max(mmax, a[i] & a[j] & a[k] & a[l]);
					}
				}
			}
		}
	}
	if (m == 5) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q]);
						}
					}
				}
			}
		}
	}
	if (m == 6) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w]);
							}

						}
					}
				}
			}
		}
	}
	if (m == 7) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e]);
								}

							}

						}
					}
				}

			}
		}
	}
	if (m == 8) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r]);
									}

								}

							}

						}
					}
				}

			}
		}
	}
	if (m == 9) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t]);
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
	if (m == 10) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y]);
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
	if (m == 11) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u]);
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
	if (m == 12) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o]);
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
	if (m == 13) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p]);
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
	if (m == 14) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s]);
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
	if (m == 15) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] &
																	           a[d]);
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
	if (m == 16) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	for (int f = d + 1; f <= n; f++) {
																		mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]
																		           & a[f]);
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
	if (m == 17) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	for (int f = d + 1; f <= n; f++) {
																		for (int g = f + 1; g <= n; g++) {
																			mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]
																			           & a[f] & a[g]);
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
	if (m == 18) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	for (int f = d + 1; f <= n; f++) {
																		for (int g = f + 1; g <= n; g++) {
																			for (int h = g + 1; h <= n; h++) {
																				mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]
																				           & a[f] & a[g] & a[h]);
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
	if (m == 19) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	for (int f = d + 1; f <= n; f++) {
																		for (int g = f + 1; g <= n; g++) {
																			for (int h = g + 1; h <= n; h++) {
																				for (int z = h + 1; z <= n; z++) {
																					mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]
																					           & a[f] & a[g] & a[h] & a[z]);
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
	if (m == 20) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int q = l + 1; q <= n; q++) {
							for (int w = q + 1; w <= n; w++) {
								for (int e = w + 1; e <= n; e++) {
									for (int r = e + 1; r <= n; r++) {
										for (int t = r + 1; t <= n; t++) {
											for (int y = t + 1; y <= n; y++) {
												for (int u = y + 1; u <= n; u++) {
													for (int o = u + 1; o <= n; o++) {
														for (int p = o + 1; p <= n; p++) {
															for (int s = p + 1; s <= n; s++) {
																for (int d = s + 1; d <= n; d++) {
																	for (int f = d + 1; f <= n; f++) {
																		for (int g = f + 1; g <= n; g++) {
																			for (int h = g + 1; h <= n; h++) {
																				for (int z = h + 1; z <= n; z++) {
																					for (int x = z + 1; x <= n; x++) {
																						mmax = max(mmax, a[i] & a[j] & a[k] & a[l] & a[q] & a[w] & a[e] & a[r] & a[t] & a[y] & a[u] & a[o] & a[p] & a[s] & a[d]
																						           & a[f] & a[g] & a[h] & a[z] & a[x]);
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
	}
	cout << mmax;
	return 0;
}

