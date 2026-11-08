#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,ans;
int a[200005];
int v[200005];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int j=30;j>=0;j--){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(v[i]==1)continue;
			if(((a[i]>>j)&1)==1){
				sum++;
			}else{
				v[i]=-1;
			}
		}
		for(int i=1;i<=n;i++){
			if(v[i]==-1)v[i]=(sum>=m);
		}
		if(sum>=m)ans+=(1<<j);
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/ 
