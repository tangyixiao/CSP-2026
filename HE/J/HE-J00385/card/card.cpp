#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define int ll
const int N=5e5+5;
const int M=3e5+5;
int n,m,a[N];
int ans[M];
bool vis[N];
int lst[M];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		lst[i]=n+1;
	}
	for(int i=1;i<=n;i++){
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(lst[a[j]]<=n){
				j=lst[a[j]];
			}
			ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

