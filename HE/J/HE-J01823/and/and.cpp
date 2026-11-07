#include<bits/stdc++.h>
using namespace std;
int z,m,a[200000+10];
bool A=1,B=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>z>>m;
	for(int i=1;i<=z;i++)cin>>a[i];
	sort(a+1,a+z+1);
	int xx=2;
	for(int i=1;i<=z;i++){
		if(xx-1==a[i]){
			while(a[i]==xx-1){
				i++;
			}
			i--;
			xx*=2;
		}else{
			A=0;
			break;
		}
	}
	for(int i=2;i<=z;i++){
		if(a[1]!=a[i]){
			B=0;
			break;
		}
	}
	if(m==1){
		int mx=-1;
		for(int i=1;i<=z;i++){
			mx=max(mx,a[i]); 
		}
		cout<<mx;
	}else if(A){
		cout<<a[z-m+1];
	}else if(B){
		cout<<a[z];
	}else if(m==2){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
	}else if(m==3){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					mx=max(mx,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<mx;
	}else if(m==4){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						mx=max(mx,a[i]&a[j]&a[k]&a[l]);
					}
				}
			}
		}
		cout<<mx;
	}else if(m==5){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]);
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==6){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[o]);
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==7){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]);
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==8){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==9){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==10){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==11){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==12){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==13){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==14){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==15){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																for(int x=w+1;x<=z;x++){
																	mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==16){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																for(int x=w+1;x<=z;x++){
																	for(int y=x+1;y<=z;y++){
																		mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==17){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																for(int x=w+1;x<=z;x++){
																	for(int y=x+1;y<=z;y++){
																		for(int b=y+1;b<=z;b++){
																			mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[b]);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==18){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																for(int x=w+1;x<=z;x++){
																	for(int y=x+1;y<=z;y++){
																		for(int b=y+1;b<=z;b++){
																			for(int c=b+1;c<=z;c++){
																				mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[b]&a[c]);
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==19){
		int mx=-1;
		for(int i=1;i<=z;i++){
			for(int j=i+1;j<=z;j++){
				for(int k=j+1;k<=z;k++){
					for(int l=k+1;l<=z;l++){
						for(int n=l+1;n<=z;n++){
							for(int o=n+1;o<=z;o++){
								for(int p=o+1;p<=z;p++){
									for(int q=p+1;q<=z;q++){
										for(int r=q+1;r<=z;r++){
											for(int s=r+1;s<=z;s++){
												for(int t=s+1;t<=z;t++){
													for(int u=t+1;u<=z;u++){
														for(int v=u+1;v<=z;v++){
															for(int w=v+1;w<=z;w++){
																for(int x=w+1;x<=z;x++){
																	for(int y=x+1;y<=z;y++){
																		for(int b=y+1;b<=z;b++){
																			for(int c=b+1;c<=z;c++){
																				for(int d=c+1;d<=z;d++){
																					mx=max(mx,a[i]&a[j]&a[k]&a[l]&a[n]&a[0]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[b]&a[c]&a[d]);
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}else if(m==z){
		int x=a[1];
		for(int i=2;i<=z;i++){
			x=x&a[i];
		}
		cout<<x;
	}else{
		cout<<0;
	}
	return 0;
}
