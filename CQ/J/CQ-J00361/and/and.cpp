#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int n,m;
int a[N];
vector<int> q;
int anss=0;
void dfs(int x,int sp){
	if(sp>m){
		cout<<x;
		return ;
	}
	for(int i=1;i<=n;i++){
		dfs(x&a[i],sp+1);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ans=1,maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans&=a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==n){
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==2){
		int o=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				o=max(o,(a[i]&a[j]));
			}
		}
		cout<<o;
		return 0;
	}
	if(n<=20){
		int asi=0;
		if(m==3){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						asi=max(asi,(a[i]&a[j]&a[k]));
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==4){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							asi=max(asi,(a[i]&a[j]&a[k]&a[l]));
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==5){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]));
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==6){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]));
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==7){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									for(int x=z+1;x<=n;x++){
										asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]&a[x]));
									}
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==8){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									for(int x=z+1;x<=n;x++){
										for(int y=x+1;y<=n;y++){
											asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]&a[x]&a[y]));
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==9){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									for(int x=z+1;x<=n;x++){
										for(int y=x+1;y<=n;y++){
											for(int u=y+1;u<=n;u++){
												asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]&a[x]&a[y]&a[u]));
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==10){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									for(int x=z+1;x<=n;x++){
										for(int y=x+1;y<=n;y++){
											for(int u=y+1;u<=n;u++){
												for(int zt=u+1;zt<=n;zt++){
													asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]&a[x]&a[y]&a[u]&a[zt]));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
		if(m==10){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int l=k+1;l<=n;l++){
							for(int r=l+1;r<=n;r++){
								for(int z=r+1;z<=n;z++){
									for(int x=z+1;x<=n;x++){
										for(int y=x+1;y<=n;y++){
											for(int u=y+1;u<=n;u++){
												for(int zt=u+1;zt<=n;zt++){
													for(int ls=zt+1;ls<=n;ls++){
														asi=max(asi,(a[i]&a[j]&a[k]&a[l]&a[r]&a[z]&a[x]&a[y]&a[u]&a[zt]&a[ls]));
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<asi;
			return 0;
		}
	}
	dfs(1,1);
	return 0;
}

