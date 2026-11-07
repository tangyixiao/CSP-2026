#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[300010],c[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				for(int k=j-1;a[k]!=a[j];k--){
					b[a[k]]=0;
				}
				b[a[j]]=1;
			}
			else b[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			c[j]+=b[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
