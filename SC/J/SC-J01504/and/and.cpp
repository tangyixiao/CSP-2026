#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],mx=0,b[200010];
void dfs(int cishu,int x){
	if(cishu==m){
		mx=max(mx,x);
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			b[i]=1;
			if(cishu==0)dfs(cishu+1,a[i]);
			else dfs(cishu+1,x&a[i]);
			b[i]=0;
		}
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool aa=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bool f=0;
		for(int j=1;j<=20;j++){
			if(a[i]==pow(2,j)-1)f=true;
		}
		if(f==false)aa=false;
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}else if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=n;j>i;j--){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
		return 0;
	}else if(m==n){
		int x=a[1];
		for(int i=2;i<=n;i++){
			x&=a[i];
		}
		cout<<x;
		return 0;
	}else if(aa){
		int x=a[n];
		for(int i=n;i>=n-m+1;i--){
			x&=a[i];
		}
		cout<<x;
		return 0;
	}
	bool b[n+1];
	for(int i=1;i<=n;i++)b[i]=0;
	int x;
	mx=0;
	dfs(0,x);
	cout<<mx;
	return 0;
}