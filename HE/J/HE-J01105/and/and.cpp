#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],out;
bool b[200005][35];
int ans[35],mxw,act;
bool no[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		long long mx=0;
		for(int i=1;i<=n;i++)mx=max(mx,a[i]);
		cout<<mx;
		return 0;
	}
	if(m==n){
		long long ns=a[1];
		for(int i=2;i<=n;i++)ns&=a[i];
		cout<<ns;
		return 0;
	}
	if(m==2&&n<=20000){
		long long ns=0;
		for(int l=1;l<n;l++){
			for(int r=l+1;r<=n;r++){
				ns=max(ns,a[l]&a[r]);
			}
		}
		cout<<ns;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int k=a[i],w=0;
		while(k){
			mxw=max(mxw,w);
			b[i][w++]=(k&1);
			k>>=1;
		}
	}
	int lst=33;
	for(int k=mxw+1;k>=0;k--){
		int cnt=0;
		if(lst!=33){
			for(int i=1;i<=n;i++){
				if(!b[i][lst])no[i]=1;
			}
		}
		for(int i=1;i<=n;i++){
			if(no[i])continue;
			if(b[i][k]==1){
				cnt++;
			}
		}
		if(cnt>=m){
			ans[k]=1;
			lst=k;
		}
//		cout<<cnt<<' '<<lst<<' '<<'\n';
	}
	for(int i=0;i<=mxw+1;i++){
		out+=((long long)ans[i]<<i);
	}
	cout<<out;
	return 0;
}
/*
9 3
0 1 2 3 4 5 6 7 8 
*/
