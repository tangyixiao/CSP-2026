#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		int maxn=0;
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
	}
	else if(m==n){
		int x=a[1];
		for(int i=2;i<=n;i++)x=x&a[i];
		cout<<x;
	}
	else if(m==2){
		int maxn=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
	}
	else if(m==3){
		int maxn=0;
		for(int i=1;i<n-1;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<=n;k++)maxn=max(maxn,a[i]&a[j]&a[k]);
		cout<<maxn;
	}
	else if(m==4){
		int maxn=0;
		for(int x=1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==5){
		int maxn=0;		for(int w=1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==6){
		int maxn=0;
		for(int v=1;v<n-4;v++)for(int w=v+1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[v]&a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==7){
		int maxn=0;
		for(int u=1;u<n-5;u++)for(int v=u+1;v<n-4;v++)for(int w=v+1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[u]&a[v]&a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==8){
		int maxn=0;
		for(int t=1;t<=n-6;t++)for(int u=t+1;u<n-5;u++)for(int v=u+1;v<n-4;v++)for(int w=v+1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[t]&a[u]&a[v]&a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==9){
		int maxn=0;
		for(int s=1;s<=n-7;s++)for(int t=s+1;t<=n-6;t++)for(int u=t+1;u<n-5;u++)for(int v=u+1;v<n-4;v++)for(int w=v+1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	else if(m==10){
		int maxn=0;
		for(int r=1;r<=n-8;r++)for(int s=r+1;s<=n-7;s++)for(int t=s+1;t<=n-6;t++)for(int u=t+1;u<n-5;u++)for(int v=u+1;v<n-4;v++)for(int w=v+1;w<n-3;w++)for(int x=w+1;x<n-2;x++)for(int y=x+1;y<n-1;y++)for(int z=y+1;z<n;z++)for(int zz=z+1;zz<=n;zz++)maxn=max(maxn,a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[x]&a[z]&a[zz]);
	}
	return 0;
}
