#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxm=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxm=max(maxm,a[i]);
	}
	if(m==1) cout<<maxm;
	else if(m==n){
		int v=a[1];
		for(int i=2;i<=n;i++){
			v&=a[i];
		}
		cout<<v;
	}
	else if(m==2){
		maxm=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				maxm=max(maxm,a[i]&a[j]);
			}
		}
		cout<<maxm;
	}
	return 0;
}
