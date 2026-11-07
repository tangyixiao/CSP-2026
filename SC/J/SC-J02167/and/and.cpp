#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,kk,maxx=-1,maxr=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)kk=a[i];
		else kk=kk&a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==n){
		cout<<kk;
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	int maxn=-1;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,(a[i]&a[j]));
			}
		}
	}
	cout<<maxn;
	return 0;
} 