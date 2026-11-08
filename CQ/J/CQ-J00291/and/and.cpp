#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1010101];
bool cmp(int A,int B){
	return A>B;
}
int sum[10];
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int ans=0,n,m;
	cin>>n>>m;
	bool f444=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4) f444=0;
	}
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}else if(f444){
		sort(a+1,a+1+n,cmp);
		int fz=4;
		for(int i=1;i<=n;i++){
			if(a[i]!=fz) fz--;
			else sum[fz]++;
		}
		if(sum[4]>=m) cout<<4;
		else if(sum[3]>=m) cout<<3;
		else if(sum[2]+sum[3]>=m) cout<<2;
		else if(sum[3]+sum[1]>=m)cout<<1;
		else cout<<0;
		return 0;
	}else{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	return 0;
}
/* 
想不到了还是分类讨论吧。 
所以2000^2会超时吗 
*/
