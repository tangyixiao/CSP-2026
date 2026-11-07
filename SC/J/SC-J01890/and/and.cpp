#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,x;
int a[200005];
bool f[200005];
void dfs(int k,int mx){
	if(k==m){
		x=max(x,mx);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0){
			f[i]=1;
			dfs(k+1,mx&a[i]);
			f[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(m==1){
		int mxxx=0;
		for(int i=1;i<=n;i++){
			mxxx=max(mxxx,a[i]);
		}
		cout << mxxx;
		return 0;
	}else if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum&=a[i];
		}
		cout << sum;
		return 0;
	}else if(m==n-1){
		int mxx;
		for(int i=1;i<=n;i++){
			int sum=a[1];
			if(i==1) sum=a[2];
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				sum&=a[i];
			}
			mxx=max(mxx,sum);
		}d
		cout << mxx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		f[i]=1;
		dfs(1,a[i]);
		f[i]=0;
	}
	cout << x;
	return 0;
}