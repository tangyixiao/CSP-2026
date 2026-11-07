#include<bits/stdc++.h>
using namespace std;
long long a[400000],b[600000],n,m,c[400000],d[600000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
		a[b[i]]=i;
		d[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(a[b[i]]==i){
			c[b[i]]=d[i];
			d[i+1]+=d[i];
		}else{
			d[a[b[i]]]+=d[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
}