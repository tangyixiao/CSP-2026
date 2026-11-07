#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,d,e,ans=(1<<31)-1;
int a[2*(int)1e5+10];
int b[2*(int)1e5+10];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	e=n;
	for(int i=30;i>=0;--i){
		d=0;
		for(int j=1;j<=e;++j){
			if(a[j]&(1<<i)){
				b[++d]=a[j];
			}
		}
		if(d>=m){
			e=d;
			for(int k=1;k<=e;++k){
				a[k]=b[k];
				if(e==m)ans&=a[k];
			}
			if(e==m){
				cout<<ans;
				return 0;
			}
		}
	}
	for(int k=1;k<=m;++k){
		ans&=a[k];
	}
	cout<<ans;
	return 0;
}
