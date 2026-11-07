#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5;
bool a[N][31],b[31],vis[N],now[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		ll k;
		vis[i]=1;
		cin>>k;
		for(int o=30;o>=0;o--){
			a[i][o]=(k&(1<<o));
		}
	}
	for(int o=30;o>=0;o--){
		int cnt=0;
		for(int i=0;i<n;i++){
			if(a[i][o]){
				now[i]=1;
				if(vis[i]==1) cnt++;
			}else now[i]=0;
		}
		if(cnt>=m){
			b[o]=1;
			for(int i=0;i<n;i++){
				if(now[i]==0) vis[i]=0;
			}
		}
		else{
			b[o]=0;
		}
	}
	ll res=0;
	for(int o=30;o>=0;o--) res|=(b[o]<<o);
	cout<<res;
	return 0;
}
