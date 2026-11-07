#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],x[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int t=1;t<=m;t++)b[t]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]++;
			}else{
				for(int t=1;t<=m;t++)b[t]=0;
				b[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++)x[j]+=b[j];
	}
	for(int j=1;j<=m;j++)cout<<x[j]<<' ';
	return 0;
}
