#include <bits/stdc++.h>
using namespace std;
int a[500001];
int c[500001];
int d[300001];
int ans[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)cin>>a[i];
	for (int i=1;i<=n;i++){
		memset(d,0,sizeof(d));
		int t=0;
		for (int j=i;j<=n;j++){
			if (d[a[j]]==0||d[a[j]]>=t){
				c[++t]=a[j];
				d[a[j]]=t;
			}
			else{
				t=d[a[j]];
			}
		}
		for (int k=1;k<=t;k++){
			ans[c[k]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
} 
