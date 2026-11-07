#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=-1e9,andl;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			andl=a[i]&a[j];
			if(andl>maxn){
				maxn=andl;
			}
		}
	}
	cout<<maxn;
	return 0;
}
