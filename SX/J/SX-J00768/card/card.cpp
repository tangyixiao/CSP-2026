#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],nxt[N],t[M],cnt[M];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	memset(t,-1,sizeof t);
	for(int i=n;i>=1;i--){
		nxt[i]=t[a[i]];
		t[a[i]]=i;
	}
//	for(int i=1;i<=n;i++)cout<<nxt[i]<<" ";
//	cout<<"\n";
	
	for(int i=1;i<=n;i++){
		int pos=i;
		while(pos<=n){
			cnt[a[pos]]++;
			while(nxt[pos]!=-1){
				pos=nxt[pos];
			}
			pos++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}
