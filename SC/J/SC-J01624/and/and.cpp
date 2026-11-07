#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,k,a[200010],v,b[200010],ma;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(i==j){
					continue;
				}
				k=a[i]&a[j];
				v=max(v,k);
			}
		}
		cout<<v;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			k=max(k,a[i]);
		}
		cout<<k;
	}
	else if(m==n){
		k=a[1];
		for(int i=1;i<=n;i++){
			k=k&a[i];
		}
		cout<<k;
	}
	else if(m==n-1){
		int q=17592186044415;
		for(int i=1;i<=n;i++){
			q=17592186044415;
			for(int j=1;j<=n;j++){
				if(j!=i){
					q=q&a[j];
				}
			}
			k=max(q,k);
		}
		cout<<k;
	}
	else{
		cout<<1;
	}
	return 0;
}