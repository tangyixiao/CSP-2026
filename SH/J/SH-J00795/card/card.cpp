#include<bits/stdc++.h>
using namespace std;
const int MAXN=500500,MAXM=300300;
int n,m,a[MAXN];
int f[MAXM],ans[MAXM],c[MAXN],nxt[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nxt[i]=i+1;
		ans[a[i]]+=i;
		if(f[a[i]]>0){
			for(int j=f[a[i]];j<i;j=nxt[j]){
				ans[a[j]]-=f[a[i]];
			}
			nxt[f[a[i]]]=i;
		} 
		f[a[i]]=i;
	} 
	
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)cout<<' ';
	}
	cout<<endl;
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
