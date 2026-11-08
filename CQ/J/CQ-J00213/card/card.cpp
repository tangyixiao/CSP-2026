#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+6;
int n,m,a[N],yly[N];
int zzs[N],k,ls[N];
signed main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!ls[a[j]]) zzs[++k]=a[j],ls[a[j]]=j;
			else{
				for(int d=ls[a[j]];d<=k;d++) ls[a[d]]=0;
				k=ls[a[j]];ls[a[j]]=k,zzs[k]=a[j];
			}
		}
		for(int i=1;i<=k;i++) yly[zzs[i]]++;
		k=0;
	}
	for(int i=1;i<=m;i++) cout<<yly[i]<<" ";
	return 0;
}

