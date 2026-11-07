#include<bits/stdc++.h>
using namespace std;
int n,m,f[300010],a[500010];
bool ss(){
	int k=0;
	for(int i=1;i<=n;i++){
		if(a[i+1]<a[i]){
			return 1;
			k=1;
		}
	}
	if(k!=1)return 0;
}
int main(){
	int i,j;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)cin>>a[i];
	f[a[n]]=n;
	if(ss()){
		for(i=1;i<=n;i++){
			if(a[i+1]!=a[i])f[a[i]]=i;
		}
	}
	for(i=1;i<=m;i++){
		cout<<f[i]<<" ";
	}
	return 0;
}