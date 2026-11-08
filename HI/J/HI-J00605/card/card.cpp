#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=2e5+5;
int n,m;
int a[N];
int ans[M];
bool vis[M];
int moni[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		memset(moni,0,sizeof(moni));
		int head=1,tail=1;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(a[tail]!=a[j]){
					tail--;
				}
			}
		}
	}
	return 0;
}
