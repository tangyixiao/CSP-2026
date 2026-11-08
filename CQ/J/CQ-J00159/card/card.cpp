#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N=5e5+5;
int n,m;
int a[N],b[N],ans[300005],v[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool l=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) l=0;
	}
	if(l){
		for(int i=1;i<=m;i++) cout<<i<<' ';
		return 0;
	}
	int k=n;
	while(k--){
		int idx=n-k,x=0;
		for(int i=idx;i<=n;i++){
			b[++x]=a[i];
			if(v[b[x]]){
				int l=v[b[x]];
				for(int j=l+1;j<x;j++) v[b[j]]=0;
				x=v[b[x]];
			}
			else v[b[x]]=x;
		}
		for(int i=1;i<=x;i++) ans[b[i]]++;
		for(int i=1;i<=m;i++) v[i]=0;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
