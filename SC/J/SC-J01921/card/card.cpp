#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500500];
int st[200500],ans[200500];
bool vis[200500];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for( int i=1; i<=n; ++i ){
		cin>>a[i];
	}
	for( int i=1; i<=n; ++i ){
		int t=0;
		for( int j=i; j<=n; ++j ){
			if( vis[a[j]] ){
				while( st[t]!=a[j] ){
					vis[st[t]]=0;
					--t;
				}
			}
			else{
				st[++t]=a[j];
				vis[a[j]]=1;
			}
		}
		for( int j=1; j<=t; ++j ){
			++ans[st[j]];
			vis[st[j]]=0;
		}
	}
	for( int i=1; i<=m; ++i ){
		cout<<ans[i]<<" ";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}