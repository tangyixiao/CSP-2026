#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n<=20) {
		int a[23];
		for(int i=0; i<n; i++)cin>>a[i];
		sort(a,a+n);
		switch(m){
		case(1): {
			cout<<a[n-1];
			return 0;
		}
		case(2): {
			int maxn=0;
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					if((a[i]&a[j])>maxn)maxn=(a[i]&a[j]);
				}
			}
			cout<<maxn;
			return 0;
		}
		case(3): {
			int maxn=0;
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					for(int k=j+1; k<n; k++) {
						if((a[i]&a[j]&a[k])>maxn)maxn=(a[i]&a[j]&a[k]);
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(4): {
			int maxn=0;
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					for(int k=j+1; k<n; k++) {
						for(int l=k+1; l<n; l++) {
							if((a[i]&a[j]&a[k]&a[l])>maxn)maxn=(a[i]&a[j]&a[k]&a[l]);
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(5): {
			int maxn=0;
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					for(int k=j+1; k<n; k++) {
						for(int l=k+1; l<n; l++) {
							for(int b=l+1; b<n; b++) {
								if((a[i]&a[j]&a[k]&a[l]&a[b])>maxn)maxn=(a[i]&a[j]&a[k]&a[l]&a[b]);
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(6): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]);
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(7): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]);
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(8): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]);
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(9): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(10): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(11): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														if((a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11])>maxn)maxn=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(12): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]);
															if(s>maxn)maxn=s;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(13): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]);
																if(s>maxn)maxn=s;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(14): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]);
																	if(s>maxn)maxn=s;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(15): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]);
																		if(s>maxn)maxn=s;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(16): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		for(int i16=i15+1;i16<n;i16++){
																			int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]&a[i16]);
																			if(s>maxn)maxn=s;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(17): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		for(int i16=i15+1;i16<n;i16++){
																			for(int i17=i16+1;i17<n;i17++){
																				int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]&a[i16]&a[i17]);
																				if(s>maxn)maxn=s;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(18): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		for(int i16=i15+1;i16<n;i16++){
																			for(int i17=i16+1;i17<n;i17++){
																				for(int i18=i17+1;i18<n;i18++){
																					int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]&a[i16]&a[i17]&a[i18]);
																					if(s>maxn)maxn=s;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxn;
		return 0;
	}
		case(19): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		for(int i16=i15+1;i16<n;i16++){
																			for(int i17=i16+1;i17<n;i17++){
																				for(int i18=i17+1;i18<n;i18++){
																					for(int i19=i18+1;i19<n;i19++){
																						int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]&a[i16]&a[i17]&a[i18]&a[i19]);
																						if(s>maxn)maxn=s;
																					}
																				}
																			}
																		}
																	}
																}	
															}		
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<maxn;
			return 0;
		}
		case(20): {
			int maxn=0;
			for(int i1=0; i1<n; i1++) {
				for(int i2=i1+1; i2<n; i2++) {
					for(int i3=i2+1; i3<n; i3++) {
						for(int i4=i3+1; i4<n; i4++) {
							for(int i5=i4+1; i5<n; i5++) {
								for(int i6=i5+1; i6<n; i6++) {
									for(int i7=i6+1; i7<n; i7++) {
										for(int i8=i7+1;i8<n;i8++){
											for(int i9=i8+1;i9<n;i9++){
												for(int i10=i9+1;i10<n;i10++){
													for(int i11=i10+1;i11<n;i11++){
														for(int i12=i11+1;i12<n;i12++){
															for(int i13=i12+1;i13<n;i13++){
																for(int i14=i13+1;i14<n;i14++){
																	for(int i15=i14+1;i15<n;i15++){
																		for(int i16=i15+1;i16<n;i16++){
																			for(int i17=i16+1;i17<n;i17++){
																				for(int i18=i17+1;i18<n;i18++){
																					for(int i19=i18+1;i19<n;i19++){
																						for(int i20=i19+1;i20<n;i20++)
																							int s=(a[i1]&a[i2]&a[i3]&a[i4]&a[i5]&a[i6]&a[i7]&a[i8]&a[i9]&a[i10]&a[i11]&a[i12]&a[i13]&a[i14]&a[i15]&a[i16]&a[i17]&a[i18]&a[i19]&a[i20]);
																							if(s>maxn)maxn=s;
																						}
																					}
																				}		
																			}
																		}	
																	}
																}
															}
														}
													}	
												}		
											}
										}
									}
								}
							}
						}
					}		
				}
		cout<<maxn;
		return 0;
		}
	}
	if(n<=2000){
		int a[2005];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		if(m==1){
			cout<<a[n-1];
			return 0;
		}
		else if(m==2){
			int maxn=0;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					 if((a[i]&a[j])>maxn)maxn=(a[i]&a[j]);
				}
			}
			cout<<maxn;
			return 0;
		}
		else if(m==n){
			int ans=a[0];
			for(int i=1;i<n;i++){
				ans&=a[i];
			}
			cout<<ans;
			return 0;
		}
	}
	return 0;
}
