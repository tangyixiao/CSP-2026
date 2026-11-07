#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxn=-1;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if (m==1){
		cout<<maxn;
		return 0;
	}
	else if (m==2){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				long long now=a[i]&a[j];
				maxand=max(maxand,now);
			}
		}
		cout<<maxand;
	}
	else if (m==3){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					long long now=a[i]&a[j]&a[k];
					maxand=max(maxand,now);
				}
			}
		}
		cout<<maxand;
	}
	else if (m==4){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						long long now=a[i]&a[j]&a[k]&a[x];
						maxand=max(maxand,now);
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==5){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						for (int y=x+1;y<=n;y++){
							long long now=a[i]&a[j]&a[k]&a[x]&a[y];
							maxand=max(maxand,now);
						}
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==6){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						for (int y=x+1;y<=n;y++){
							for (int z=y+1;z<=n;z++){
								long long now=a[i]&a[j]&a[k]&a[x]&a[y]&a[z];
								maxand=max(maxand,now);
							}
						}
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==7){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						for (int y=x+1;y<=n;y++){
							for (int z=y+1;z<=n;z++){
								for (int b=z+1;b<=n;b++){
									long long now=a[i]&a[j]&a[k]&a[x]&a[y]&a[z]&a[b];
									maxand=max(maxand,now);
								}
							}
						}
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==8){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						for (int y=x+1;y<=n;y++){
							for (int z=y+1;z<=n;z++){
								for (int b=z+1;b<=n;b++){
									for (int c=b+1;c<=n;c++){
										long long now=a[i]&a[j]&a[k]&a[x]&a[y]&a[z]&a[b]&a[c];
										maxand=max(maxand,now);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==9){
		long long maxand=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					for (int x=k+1;x<=n;x++){
						for (int y=x+1;y<=n;y++){
							for (int z=y+1;z<=n;z++){
								for (int b=z+1;b<=n;b++){
									for (int c=b+1;c<=n;c++){
										for (int d=c+1;d<=n;d++){
											long long now=a[i]&a[j]&a[k]&a[x]&a[y]&a[z]&a[b]&a[c]&a[d];
											maxand=max(maxand,now);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxand;
	}
	else if (m==n){
		long long now=a[1];
		for (int i=2;i<=n;i++){
			now=now&a[i];
		}
		cout<<now;
	}
	else{
		cout<<maxn;
	}
	return 0;
}
