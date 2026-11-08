#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],f[5],cnt,f1=1,f2=1;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) f2=0;
		if(pow(2,__lg(a[i]+1))!=a[i]+1) f1=0;
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
	}
	else if(m==n){
		cnt=a[1];
		for(int i=2;i<=n;i++) cnt&=a[i];
		cout<<cnt;
	}
	else if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) maxn=max(maxn,a[i]&a[j]);
		cout<<maxn;
	}
	else if(f1==1){
		cout<<a[n-m+1];
	}
	else if(f2==1){
		cnt=a[n],f1=m;
		for(int i=n-1;i>=1&&f1!=0;i--) if(pow(2,__lg(a[i]))!=a[i]) cnt&=a[i],f1--;
		if(f1>0) cout<<0;
		else cout<<cnt;
	}
	else{
		for(int i=1;i<=n;i++) f[a[i]]++;
		if(f[4]>=m) cout<<4;
		else if(f[3]>=m) cout<<3;
		else if(f[3]+f[2]>=m||f[2]>=m) cout<<2;
		else if(f[1]>=m||f[3]+f[1]>=m) cout<<1;
		else cout<<0;
	}
	return 0;
}

