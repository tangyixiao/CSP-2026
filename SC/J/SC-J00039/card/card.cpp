#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],l[N],vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		l[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int r=i;
		while(r<=n){
			vis[a[r]]++;
			r=l[a[r]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<' ';
	}
	return 0;
}