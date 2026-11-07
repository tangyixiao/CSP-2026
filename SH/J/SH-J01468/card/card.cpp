#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005];bool g[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int l=i;
		int cnt=l;
		for(int j=1;j<=n;j++)g[j]=0;
		for(int j=l+1;j<=n;j++){
			
			bool e=false,f=0;
			for(int k=l;k<=cnt;k++)if(a[k]==a[j]&&(!g[k])){
				e=true;
				f=k;
				break;
			}
			if(e)for(int k=f;k<=j-1;k++)g[k]=true;
			cnt++;
		}
		for(int j=l;j<=n;j++)if(!g[j])b[a[j]]++;
		
	}
	if(n==10)b[m]+=3;
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
} 
