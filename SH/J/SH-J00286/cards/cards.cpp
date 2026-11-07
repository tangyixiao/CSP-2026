#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],k[500005],ans[300005],z[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	k[i]=z[a[i]];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans[a[j]]++;
			if(k[j])
			j=k[j];
		}
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<' ';
		return 0; 
}
