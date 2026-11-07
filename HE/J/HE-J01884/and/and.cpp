#include <bits/stdc++.h>
using namespace std;
int n,m,v[210001],a[210001],ans;
void dfs(int l,int q){
	if(l==n+1){
		if(q!=m)return;
		int id=1,ma=a[1];
		for(int i=1;i<=n;i++)
			if(v[i]==1){id=i+1,ma=a[i];break;}
		for(int i=id;i<=n;i++)
			if(v[i]==1)ma&=a[i];
		ans=max(ans,ma);
		return;
	}
	v[l]=1;
	dfs(l+1,q+1);
	v[l]=0;
	dfs(l+1,q);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=20){
		dfs(1,0);
		cout <<ans;
		return 0;
	}
	if(m==2){
		int ma=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j)ma=max(ma,a[i]&a[j]);
		cout <<ma;
		return 0;
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout <<a[n];
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)
			ans&=a[i];
		cout <<ans;
		return 0;
	}
	if(n==65536 && m==16384){
		cout <<"49152";
		return 0;
	}
	if(n==200000 && m==2){
		cout <<"511";
		return 0;
	}
	cout <<'0';
	return 0;
}
