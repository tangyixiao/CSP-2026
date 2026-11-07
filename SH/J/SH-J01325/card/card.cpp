#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 30005
int n,m;
int a[MAXN];
int g[MAXN];
int t;
int h[MAXN];
signed main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		t=0;
		for(int j=1;j<=m;j++){
			h[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(h[a[j]]==1)
				for(int f=j;;f--){
					if(if())
				}
		} 
	}
	return 0;
} 
