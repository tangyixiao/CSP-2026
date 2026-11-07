#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],maxx,maxxx,pop,ppp,b[100005],pip;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1){
			pop=1;
		}
		if(a[i]>4) ppp=1;
		if((a[i]+1)/2==1&&a[i]!=0) pip=1;
	}
	if(pop==0&&n>=2000){
		cout<<n/2-1;
		return 0;
	}
	if(pip==0&&n>=2000){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	if(n>2000&&ppp==0){
		for(int i=1;i<=n;i++){
			if(a[i]==4) b[4]++;
			if(a[i]==3) b[3]++;
			if(a[i]==2) b[2]++;
			if(a[i]==1) b[1]++;
		}
		if(b[4]>=m){
			cout<<4;
			return 0;
		}
		else if(b[3]>=m){
			cout<<3;
			return 0;
		}
		else if(b[3]+b[2]>=m){
			cout<<2;
			return 0;
		}
		else if(b[3]+b[1]>=m){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			maxx=maxx&a[i];
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			for(int l=1;l<=n;l++){
				if(l!=i){
					maxxx=a[l];
					break;
				}
			}
			for(int o=1;o<=n;o++){
				if(o==i) continue;
				maxxx&=a[o]; 
			}
			maxx=max(maxx,maxxx);
		}
		cout<<maxx;
		return 0;
	}
	/*if(m==n-2){
		for(int i=1;i<=n;i++){
			for(int o=i+1;o<=n;o++){
				for(int l=1;l<=n;l++){
					if(l!=i&&l!=o){
						maxxx=a[l];
						break;
					}
				}
				for(int p=1;p<=n;p++){
					if(p==i||p==o) continue;
					maxxx&=a[p]; 
				}
			}
			maxx=max(maxx,maxxx);
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-3){
		for(int i=1;i<=n;i++){
			for(int o=i+1;o<=n;o++){
				for(int y=o+1;y<=n;y++){
					for(int l=1;l<=n;l++){
						if(l!=i&&l!=o&&l!=y){
							maxxx=a[l];
							break;
						}
					}
					for(int p=1;p<=n;p++){
						if(p==i||p==o||p==y) continue;
						maxxx&=a[p]; 
					}
					maxx=max(maxx,maxxx);
				}
				
			}
			
		}
		cout<<maxx;
		return 0;
	}*/
	if(m==1){
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					maxx=max(maxx,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						maxx=max(maxx,a[i]&a[j]&a[k]&a[l]);
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]);
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==6){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]);
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==7){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]);
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==8){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==9){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==10){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==11){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==12){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]);
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==13){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]);
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==14){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]);
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==15){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																for(int bbbbbb=bbbbb+1;bbbbbb<=n;bbbbbb++){
																	maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]&a[bbbbbb]);
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==16){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																for(int bbbbbb=bbbbb+1;bbbbbb<=n;bbbbbb++){
																	for(int ii=bbbbbb+1;ii<=n;ii++){
																		maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]&a[bbbbbb]&a[ii]);
																	}
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==17){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																for(int bbbbbb=bbbbb+1;bbbbbb<=n;bbbbbb++){
																	for(int ii=bbbbbb+1;ii<=n;ii++){
																		for(int iii=ii+1;iii<=n;iii++){
																			maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]&a[bbbbbb]&a[ii]&a[iii]);
																		}
																	}
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==18){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																for(int bbbbbb=bbbbb+1;bbbbbb<=n;bbbbbb++){
																	for(int ii=bbbbbb+1;ii<=n;ii++){
																		for(int iii=ii+1;iii<=n;iii++){
																			for(int iiii=iii+1;iiii<=n;iiii++){
																				maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]&a[bbbbbb]&a[ii]&a[iii]&a[iiii]);
																			}
																		}
																	}
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==19){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int p=l+1;p<=n;p++){
							for(int pp=p+1;pp<=n;pp++){
								for(int ppp=pp+1;ppp<=n;ppp++){
									for(int pppp=ppp+1;pppp<=n;pppp++){
										for(int ppppp=pppp+1;ppppp<=n;ppppp++){
											for(int pppppp=ppppp+1;pppppp<=n;pppppp++){
												for(int bb=pppppp+1;bb<=n;bb++){
													for(int bbb=bb+1;bbb<=n;bbb++){
														for(int bbbb=bbb+1;bbbb<=n;bbbb++){
															for(int bbbbb=bbbb+1;bbbbb<=n;bbbbb++){
																for(int bbbbbb=bbbbb+1;bbbbbb<=n;bbbbbb++){
																	for(int ii=bbbbbb+1;ii<=n;ii++){
																		for(int iii=ii+1;iii<=n;iii++){
																			for(int iiii=iii+1;iiii<=n;iiii++){
																				for(int iiiii=iiii+1;iiiii<=n;iiiii++){
																					maxx=max(maxx,a[i]&a[j]&a[k]&a[l]&a[p]&a[pp]&a[ppp]&a[pppp]&a[ppppp]&a[pppppp]&a[bb]&a[bbb]&a[bbbb]&a[bbbbb]&a[bbbbbb]&a[ii]&a[iii]&a[iiii]&a[iiiii]);
																				}
																			}
																		}
																	}
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	return 0;
} 