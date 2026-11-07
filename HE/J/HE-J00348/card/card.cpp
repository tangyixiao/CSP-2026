#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 5e5+10;
int a[N],vis[9000000],ans[9000000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	
		int ago=1;
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]){
				cout<<i-ago+i-2<<" ";
				ago=i;
			}
		}
	cout<<n-ago+1+a[n];
	return 0;
}

