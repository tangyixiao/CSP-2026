#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll add(ll x,ll y){
	string a,b,_a,_b;
	ll cnt=0;
	while(x){
		int t=x%2;
		x/=2;
		a=a+char(t+48);
	}
	while(y){
		int t=y%2;
		y/=2;
		b=b+char(t+48);
	}
//	for(int i=a.size()-1;i>=0;i--){
//		_a=a[i];
//	}
//	for(int i=b.size()-1;i>=0;i--){
//		_b=b[i];
//	}
	for(int i=0;i<min(a.size(),b.size());i++){
		if(a[i]==b[i]&&a[i]=='1'){
			cnt+=pow(2,i);
		}
	}
	return cnt;
}
ll a[100001];
int xxff(int n,int m){
	ll maxx=INT_MIN;
	if(m==3){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					maxx=max(maxx,add(a[q],add(a[w],a[e])));
				}
			}
		}
	}
	if(m==4){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						maxx=max(maxx,add(a[q],add(a[w],add(a[e],a[r]))));
					}
				}
			}
		}
	}
	if(m==5){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],a[t])))));
						}
						
					}
				}
			}
		}
	}
	if(m==6){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],a[y]))))));
							}
						}
					}
				}
			}
		}
	}
	if(m==7){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],a[u])))))));
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==8){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										
										maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],a[u])))))));
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==9){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											
											maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],a[o]))))))));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==10){
		
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],a[p])))))))));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==11){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
												maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],a[s]))))))))));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==12){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],a[d])))))))))));
														
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==13){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],a[f]))))))))))));
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==14){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],a[g])))))))))))));
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==15){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																for(int h=g+1;h<=n;h++){
																	maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],add(a[g],a[h]))))))))))))));
																} 
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==16){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																for(int h=g+1;h<=n;h++){
																	for(int j=h+1;j<=n;j++){
																		maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],add(a[g],add(a[h],a[j])))))))))))))));
																	}
																} 
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==17){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																for(int h=g+1;h<=n;h++){
																	for(int j=h+1;j<=n;j++){
																		for(int k=j+1;k<=n;k++){
																			maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],add(a[g],add(a[h],add(a[j],a[k]))))))))))))))));
																		}
																	}
																} 
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==18){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																for(int h=g+1;h<=n;h++){
																	for(int j=h+1;j<=n;j++){
																		for(int k=j+1;k<=n;k++){
																			for(int l=k+1;l<=n;l++){
																				maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],add(a[g],add(a[h],add(a[j],add(a[k],a[l])))))))))))))))));
																			}
																			
																		}
																	}
																} 
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==19){
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				for(int e=w+1;e<=n;e++){
					for(int r=e+1;r<=n;r++){
						for(int t=r+1;t<=n;t++){
							for(int y=t+1;y<=n;y++){
								for(int u=y+1;u<=n;u++){
									for(int i=u+1;i<=n;i++){
										for(int o=i+1;o<=n;o++){
											for(int p=o+1;p<=n;p++){
												for(int s=p+1;s<=n;s++){
													for(int d=s+1;d<=n;d++){
														for(int f=d+1;f<=n;f++){
															for(int g=f+1;g<=n;g++){
																for(int h=g+1;h<=n;h++){
																	for(int j=h+1;j<=n;j++){
																		for(int k=j+1;k<=n;k++){
																			for(int l=k+1;l<=n;l++){
																				for(int z=l+1;z<=n;z++){
																					maxx=max(maxx,add(a[q],add(a[w],add(a[e],add(a[r],add(a[t],add(a[y],add(a[u],add(a[o],add(a[p],add(a[s],add(a[d],add(a[f],add(a[g],add(a[h],add(a[j],add(a[k],add(a[l],a[z]))))))))))))))))));
																				}
																			}
																			
																		}
																	}
																} 
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return maxx;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	ll maxx=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(a[i],maxx);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		ll ans=0;
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=add(ans,a[i]);
		} 
		cout<<ans;
		return 0;
	}
	if(m==2){
		ll maxn=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,add(a[i],a[j]));
			}
		}
		cout<<maxn;
		return 0;
	}
	if(n<=20){
		cout<<xxff(n,m);
		return 0;
	}
	return 0;
} 
