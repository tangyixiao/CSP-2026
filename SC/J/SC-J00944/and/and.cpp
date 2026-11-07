#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	int mx=0,all=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)all=a[i];
		else all&=a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
	}else if(m==n)cout<<all;
	else if(m==n-1){
		int f=0,mj=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				if(j==1||(j==2&&i==1))f=a[j];
				else f&=a[j];
			}
			mj=max(mj,f);
		}
		cout<<mj;
	}else if(m==2){
		int mj=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				mj=max(mj,a[i]&a[j]);
			}
		}
		cout<<mj;
	}else{
		cout<<mx;
	}
}