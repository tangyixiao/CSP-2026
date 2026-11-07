#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=5e5+800;
int ask[MAXN];
int ne[MAXN],prs[MAXN];
int ans[MAXN];
bool p[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>ask[i];
		ne[prs[ask[i]]]=i;
		prs[ask[i]]=i;
	}
	for(int i=1;i<=n;++i){
		int j=i;
		while(j<=n){
			if(ne[j]!=0) j=ne[j];
			else {ans[ask[j]]++;j++;}
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<' ';
	}
	return 0;
}
