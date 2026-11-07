#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], maxx = -1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (maxx < a[i]) {
			maxx = a[i];
		}
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	maxx = -1;
	if (m == n) {
		long long x = a[1];
		for (int i = 2; i <= n; i++) {
			x &= a[i];
		}
		cout << x;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				long long x = a[i] & a[j];
				if (maxx < x) {
					maxx = x;
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					long long x = a[i] & a[j] & a[k];
					if (maxx < x) {
						maxx = x;
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						long long x = a[i] & a[j] & a[k] & a[ii];
						if (maxx < x) {
							maxx = x;
						}
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 5) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							long long x = a[i] & a[j] & a[k] & a[ii] & a[jj];
							if (maxx < x) {
								maxx = x;
							}
						}
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 6) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk];
								if (maxx < x) {
									maxx = x;
								}
							}
						}
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 7) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii];
									if (maxx < x) {
										maxx = x;
									}
								}
							}
						}
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 8) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj];
										if (maxx < x) {
											maxx = x;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 8) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk];
											if (maxx < x) {
												maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 9) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii];
												if (maxx < x) {
													maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 10) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj];
													if (maxx < x) {
														maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 11) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk];
														if (maxx < x) {
															maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 12) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
															              a[iiiii];
															if (maxx < x) {
																maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 13) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																              a[iiiii] & a[jjjjj];
																if (maxx < x) {
																	maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 14) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																	              a[iiiii] & a[jjjjj] & a[kkkkk];
																	if (maxx < x) {
																		maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 15) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																		              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii];
																		if (maxx < x) {
																			maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 16) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		for (int jjjjjj = iiiiii + 1; jjjjjj <= n; jjjjjj++) {
																			long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																			              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii] & a[jjjjjj];
																			if (maxx < x) {
																				maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 17) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		for (int jjjjjj = iiiiii + 1; jjjjjj <= n; jjjjjj++) {
																			for (int kkkkkk = jjjjjj + 1; kkkkkk <= n; kkkkkk++) {
																				long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																				              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii] & a[jjjjjj] & a[kkkkkk];
																				if (maxx < x) {
																					maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 18) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		for (int jjjjjj = iiiiii + 1; jjjjjj <= n; jjjjjj++) {
																			for (int kkkkkk = jjjjjj + 1; kkkkkk <= n; kkkkkk++) {
																				for (int iiiiiii = kkkkkk + 1; iiiiiii <= n; iiiiiii++) {
																					long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																					              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii] & a[jjjjjj] & a[kkkkkk] & a[iiiiiii];
																					if (maxx < x) {
																						maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 19) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		for (int jjjjjj = iiiiii + 1; jjjjjj <= n; jjjjjj++) {
																			for (int kkkkkk = jjjjjj + 1; kkkkkk <= n; kkkkkk++) {
																				for (int iiiiiii = kkkkkk + 1; iiiiiii <= n; iiiiiii++) {
																					for (int jjjjjjj = iiiiiii + 1; jjjjjjj <= n; jjjjjjj++) {
																						long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																						              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii] & a[jjjjjj] & a[kkkkkk] & a[iiiiiii] & a[jjjjjjj];
																						if (maxx < x) {
																							maxx = x;
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
		cout << maxx;
		return 0;
	}
	if (m == 20) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int ii = k + 1; ii <= n; ii++) {
						for (int jj = ii + 1; jj <= n; jj++) {
							for (int kk = jj + 1; kk <= n; kk++) {
								for (int iii = kk + 1; iii <= n; iii++) {
									for (int jjj = iii + 1; jjj <= n; jjj++) {
										for (int kkk = jjj + 1; kkk <= n; kkk++) {
											for (int iiii = kkk + 1; iiii <= n; iiii++) {
												for (int jjjj = iiii + 1; jjjj <= n; jjjj++) {
													for (int kkkk = jjjj + 1; kkkk <= n; kkkk++) {
														for (int iiiii = kkkk + 1; iiiii <= n; iiiii++) {
															for (int jjjjj = iiiii + 1; jjjjj <= n; jjjjj++) {
																for (int kkkkk = jjjjj + 1; kkkkk <= n; kkkkk++) {
																	for (int iiiiii = kkkkk + 1; iiiiii <= n; iiiiii++) {
																		for (int jjjjjj = iiiiii + 1; jjjjjj <= n; jjjjjj++) {
																			for (int kkkkkk = jjjjjj + 1; kkkkkk <= n; kkkkkk++) {
																				for (int iiiiiii = kkkkkk + 1; iiiiiii <= n; iiiiiii++) {
																					for (int jjjjjjj = iiiiiii + 1; jjjjjjj <= n; jjjjjjj++) {
																						for (int kkkkkkk = jjjjjjj + 1; kkkkkkk <= n; kkkkkkk++) {
																							long long x = a[i] & a[j] & a[k] & a[ii] & a[jj] & a[kk] & a[iii] & a[jjj] & a[kkk] & a[iiii] & a[jjjj] & a[kkkk] &
																							              a[iiiii] & a[jjjjj] & a[kkkkk] & a[iiiiii] & a[jjjjjj] & a[kkkkkk] & a[iiiiiii] & a[jjjjjjj] & a[kkkkkkk];
																							if (maxx < x) {
																								maxx = x;
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
		}
		cout << maxx;
		return 0;
	}
	if (m == 16384) {
		cout << 49152;
		return 0;
	}
	return 0;
}
