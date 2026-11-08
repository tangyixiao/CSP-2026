#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N],b[N],ri[N],q[N],ty[N],zhen[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		memset(ri,0,sizeof(ri));
		memset(q,0,sizeof(q));
		memset(ty,0,sizeof(ty));
		int ii=0;
		for(int j=i;j<=n;j++){
			if(!b[a[j]]){
				q[++ii]=a[j];
				ri[a[j]]=ii;
				b[a[j]]=1;
			}
			else{
				ii=ri[a[j]];
			}
		}
		for(int j=1;j<=ii;j++){
			ty[q[j]]=1;
		}
		for(int k=1;k<=m;k++){
			zhen[k]+=ty[k];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<zhen[i]<<" ";
	}
	return 0;
}
/*4 3
1 2 1 3*/
