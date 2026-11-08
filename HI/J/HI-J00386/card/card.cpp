#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[500005],b[500005],f[500005],w[500005],h[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		w[a[i]]+=1;
	}
	for(int i=1;i<=n;i++){
		w[a[i-1]]-=1;
		for(int j=1;j<=m;j++){
		w[j]+=h[j];
		h[j]=0;
		}
		for(int v=1;v<=m;v++){
			f[v]=0;
		}
		for(int v=i;v<=n;v++){
			if(f[a[v]]!=0){
				for(int j=f[a[v]];j<v;j++){
					w[a[j]]-=1;
					h[a[j]]+=1;
				}
				f[a[v]]=v;
		}else{
			f[a[v]]=v;
		}
		}
		for(int j=1;j<=m;j++){
			if(w[j]!=0){
				b[j]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
