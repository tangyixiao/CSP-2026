#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m;
int a[N],te[M];
bool vis[M];
int q[N],h,t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==1&&n>5000){
		cout<<n;
		return 0;
	}
	if(m==2&&n>5000){
		for(int i=1;i<=n;++i){
			if(a[i]==a[n]){
				++te[a[i]];
			}else{
				++te[a[i]];
				++te[a[n]];
			}
		}
		cout<<te[1]<<' '<<te[2];
		return 0;
	}
	h=-1,t=0;
	for(int k=1;k<=n;++k){
		for(int i=1;i<=m;++i) vis[i]=0;
		for(int i=k;i<=n;++i){
			if(vis[a[i]]==true){
				while(h>=t&&q[h]!=a[i]){
					vis[q[h]]=0;
					--h;
				}
			}else{
				q[++h]=a[i];
				vis[a[i]]=1;
			}
		}
		while(h>=t){
			++te[q[h]];
			--h;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<te[i]<<' ';
	}
	return 0;
}