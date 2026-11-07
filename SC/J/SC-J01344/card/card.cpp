#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10,maxm=3e5+10;
int n,m;
int a[maxn],t[maxm];
int ans[maxn];
int solve1(){
	for(int i=2;i<=n+1;i++){
		if(a[i]!=a[i-1])cout<<i-1<<" ";
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int fa=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++;
		if(a[i]<a[i-1]&&i!=1){
			fa=1;
		}
	}
	int k=a[n];
	if(fa==0){
		solve1();
	}else{
		for(int i=1;i<=m;i++){
			if(i==k)cout<<n<<' ';
			else cout<<t[i]<<" ";
		}
	}
	return 0;
}