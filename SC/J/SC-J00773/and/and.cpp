#include <bits/stdc++.h>
using namespace std;
const int N=3e5;
int a[N],m,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m==1){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}
	if(m==2){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}else{
					ma=max(ma,a[i]&a[j]);
				}
			}
		}
		cout<<ma;
	}
	if(m==3){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					if(i!=j&&i!=p&&p!=j){
						ma=max(ma,a[i]&a[j]&a[p]);
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==4){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						if(i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q){
							ma=max(ma,a[i]&a[j]&a[p]&a[q]);
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==5){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							if(i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q){
								ma=max(ma,a[i]&a[j]&a[p]&a[q]&a[e]);
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==6){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								if(i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
									ma=max(ma,a[i]&a[j]&a[p]&a[q]&a[e]&a[r]);
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==7){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									if(l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
										ma=max(ma,a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==8){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										if(x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
											ma=max(ma,a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==9){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											if(y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
												ma=max(ma,a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==10){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												if(k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
												ma=max(ma,a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
											}
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==11){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
												if(w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
													ma=max(ma,a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
												}
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==12){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
													if(t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
														ma=max(ma,a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
													}
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==13){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
														if(u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
															ma=max(ma,a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
														}
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==14){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
															for(int o=1;o<=n;o++){
															if(o!=u&&o!=t&&o!=w&&o!=i&&o!=j&&o!=e&&o!=p&&o!=q&&o!=l&&o!=r&&o!=x&&o!=y&&o!=k&&u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
																ma=max(ma,a[o]&a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
															}
															}	
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==15){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
															for(int o=1;o<=n;o++){
																for(int d=1;d<=n;d++){
																if(d!=o&&d!=u&&d!=t&&d!=w&&d!=i&&d!=j&&d!=e&&d!=p&&d!=q&&d!=l&&d!=r&&d!=x&&d!=y&&d!=k&&o!=u&&o!=t&&o!=w&&o!=i&&o!=j&&o!=e&&o!=p&&o!=q&&o!=l&&o!=r&&o!=x&&o!=y&&o!=k&&u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
																	ma=max(ma,a[d]&a[o]&a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
																}
																}
															}	
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==16){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
															for(int o=1;o<=n;o++){
																for(int d=1;d<=n;d++){
																	for(int f=1;f<=n;f++){
																	if(f!=d&&f!=o&&f!=u&&f!=t&&f!=w&&f!=i&&f!=j&&f!=e&&f!=p&&f!=q&&f!=l&&f!=r&&f!=x&&f!=y&&f!=k&&d!=o&&d!=u&&d!=t&&d!=w&&d!=i&&d!=j&&d!=e&&d!=p&&d!=q&&d!=l&&d!=r&&d!=x&&d!=y&&d!=k&&o!=u&&o!=t&&o!=w&&o!=i&&o!=j&&o!=e&&o!=p&&o!=q&&o!=l&&o!=r&&o!=x&&o!=y&&o!=k&&u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
																		ma=max(ma,a[f]&a[d]&a[o]&a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
																	}
																	}	
																}
															}	
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==17){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
															for(int o=1;o<=n;o++){
																for(int d=1;d<=n;d++){
																	for(int f=1;f<=n;f++){
																		for(int g=1;g<=n;g++){
																		if(g!=f&&g!=d&&g!=o&&g!=u&&g!=t&&g!=w&&g!=i&&g!=j&&g!=e&&g!=p&&g!=q&&g!=l&&g!=r&&g!=x&&g!=y&&g!=k&&f!=d&&f!=o&&f!=u&&f!=t&&f!=w&&f!=i&&f!=j&&f!=e&&f!=p&&f!=q&&f!=l&&f!=r&&f!=x&&f!=y&&f!=k&&d!=o&&d!=u&&d!=t&&d!=w&&d!=i&&d!=j&&d!=e&&d!=p&&d!=q&&d!=l&&d!=r&&d!=x&&d!=y&&d!=k&&o!=u&&o!=t&&o!=w&&o!=i&&o!=j&&o!=e&&o!=p&&o!=q&&o!=l&&o!=r&&o!=x&&o!=y&&o!=k&&u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
																			ma=max(ma,a[g]&a[f]&a[d]&a[o]&a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
																		}
																		}	
																	}	
																}
															}	
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==18){
		int ma=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int p=1;p<=n;p++){
					for(int q=1;q<=n;q++){
						for(int e=1;e<=n;e++){
							for(int r=1;r<=n;r++){
								for(int l=1;l<=n;l++){
									for(int x=1;x<=n;x++){
										for(int y=1;y<=n;y++){
											for(int k=1;k<=n;k++){
												for(int w=1;w<=n;w++){
													for(int t=1;t<=n;t++){
														for(int u=1;u<=n;u++){
															for(int o=1;o<=n;o++){
																for(int d=1;d<=n;d++){
																	for(int f=1;f<=n;f++){
																		for(int g=1;g<=n;g++){
																			for(int h=1;h<=n;h++){
																			if(h!=g&&h!=f&&h!=d&&h!=o&&h!=u&&h!=t&&h!=w&&h!=i&&h!=j&&h!=e&&h!=p&&h!=q&&h!=l&&h!=r&&h!=x&&h!=y&&h!=k&&g!=d&&g!=o&&g!=u&&g!=t&&g!=w&&g!=i&&g!=j&&g!=e&&g!=p&&g!=q&&g!=l&&g!=r&&g!=x&&g!=y&&g!=k&&f!=d&&f!=o&&f!=u&&f!=t&&f!=w&&f!=i&&f!=j&&f!=e&&f!=p&&f!=q&&f!=l&&f!=r&&f!=x&&f!=y&&f!=k&&d!=o&&d!=u&&d!=t&&d!=w&&d!=i&&d!=j&&d!=e&&d!=p&&d!=q&&d!=l&&d!=r&&d!=x&&d!=y&&d!=k&&o!=u&&o!=t&&o!=w&&o!=i&&o!=j&&o!=e&&o!=p&&o!=q&&o!=l&&o!=r&&o!=x&&o!=y&&o!=k&&u!=t&&u!=w&&u!=i&&u!=j&&u!=e&&u!=p&&u!=q&&u!=l&&u!=r&&u!=x&&u!=y&&u!=k&&t!=w&&t!=i&&t!=j&&t!=e&&t!=p&&t!=q&&t!=l&&t!=r&&t!=x&&t!=y&&t!=k&&w!=i&&w!=j&&w!=e&&w!=p&&w!=q&&w!=l&&w!=r&&w!=x&&w!=y&&w!=k&&k!=i&&k!=j&&k!=p&&k!=q&&k!=e&&k!=r&&k!=l&&k!=x&&k!=y&&y!=i&&y!=j&&y!=e&&y!=r&&y!=l&&y!=x&&y!=p&&y!=q&&x!=i&&x!=j&&x!=p&&x!=q&&x!=e&&x!=r&&x!=l&&l!=i&&l!=j&&l!=e&&l!=q&&l!=p&&l!=r&&i!=j&&i!=p&&i!=q&&j!=p&&j!=q&&p!=q&&e!=i&&e!=j&&e!=p&&e!=q&&r!=i&&r!=j&&r!=p&&r!=q&&r!=e){
																				ma=max(ma,a[h]&a[g]&a[f]&a[d]&a[o]&a[u]&a[t]&a[w]&a[k]&a[y]&a[x]&a[i]&a[j]&a[p]&a[q]&a[e]&a[r]&a[l]);
																			}
																			}	
																		}	
																	}	
																}
															}	
														}	
													}	
												}	
											}
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
		cout<<ma;
	}
	if(m==n-1){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					if(ans==0){ans=a[j];}
					else{ans=ans&a[j];}
				}
			}
		}
		cout<<ans;
	}
	return 0;
}