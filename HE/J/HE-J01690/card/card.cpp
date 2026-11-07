#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],p[300005],c[300005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[a[i]]=i;
		c[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		int j=p[i];
		while(j<=n){
			j=p[a[j]];
			b[a[j]]+=c[i];
			j++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	cout<<endl;
	return 0;
}
