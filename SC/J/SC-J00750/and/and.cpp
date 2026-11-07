#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int ans=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int c=a[i]&a[j];
				ans=max(ans,c);
			}
		}
		cout<<ans;
		return 0;
	}if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					int c=a[i]&a[j]&a[k];
				    ans=max(ans,c);
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						int c=a[i]&a[j]&a[k]&a[l];
				        ans=max(ans,c);
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int r=l+1;r<=n;r++){
							int c=a[i]&a[j]&a[k]&a[l]&a[r];
				            ans=max(ans,c);
						}
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==6){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int r=l+1;r<=n;r++){
							for(int x=r+1;x<=n;x++){
								int c=a[i]&a[j]&a[k]&a[l]&a[r]&a[x];
								ans=max(ans,c);
							}
						}
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==7){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int r=l+1;r<=n;r++){
							for(int x=r+1;x<=n;x++){
								for(int y=x+1;y<=n;y++){
								int c=a[i]&a[j]&a[k]&a[l]&a[r]&a[x]&a[y];
								ans=max(ans,c);
								}
							}
						}
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==8){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int r=l+1;r<=n;r++){
							for(int x=r+1;x<=n;x++){
								for(int y=x+1;y<=n;y++){
									for(int z=y+1;z<=n;z++){
									int c=a[i]&a[j]&a[k]&a[l]&a[r]&a[x]&a[y]&a[z];
								    ans=max(ans,c);
								    }
								}
							}
						}
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==9){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int r=l+1;r<=n;r++){
							for(int x=r+1;x<=n;x++){
								for(int y=x+1;y<=n;y++){
									for(int z=y+1;z<=n;z++){
										for(int d=z+1;d<=n;d++){
										int c=a[i]&a[j]&a[k]&a[l]&a[r]&a[x]&a[y]&a[z]&a[d];
								        ans=max(ans,c);
										}
								    }
								}
							}
						}
				    }
				}
			}
		}
		cout<<ans;
		return 0;
	}if(m==n){
		for(int i=1;i<=1;i++){
			int x=1;
			int c=a[i];
			int d;
			while(n>1){
				x+=1;
				d=c&a[x];
				n--;
			}
		}
		cout<<ans;
		return 0;
	}if(m==1){
		int z=0;
		for(int i=1;i<=n;i++){
			z=max(z,a[i]);
		}
		cout<<z;
		return 0;
	}
}