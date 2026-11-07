#include<bits\stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500005];
int b[300005];
int c[500005];
int d[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) c[j]=0;
		for (int j=1;j<=n;j++) d[j]=0;
		int cnt=1;
		for (int j=i;j<=n;j++){
			if (j==i) c[a[j]]=cnt,d[cnt]=a[j],cnt++;
			else{
				if (c[a[j]]==0){
					c[a[j]]=cnt;
					d[cnt]=a[j];
					cnt++;
				}
				else{
					for (int k=c[a[j]]+1;k<=cnt+1;k++) d[k]=0,c[d[k]]=0;
					cnt=c[a[j]];
					d[cnt]=a[j];
					cnt++;
				}
			}
		}
		for (int j=1;j<=cnt;j++) b[d[j]]++;
	}
	for (int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
} 
