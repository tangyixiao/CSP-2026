#include<bits/stdc++.h>//20
#define int long long
using namespace std;
int a[200020];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	maxx=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(i==j)continue;
			int x=a[i]&a[j];
			maxx=max(maxx,x);
		}
	}
	cout<<maxx;
	return 0;
}

