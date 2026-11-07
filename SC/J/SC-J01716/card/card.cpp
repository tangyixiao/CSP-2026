#include<bits/stdc++.h>
using namespace std;
int ans[100010];
int h[200010];
int a[200010];
int z[200010],d;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];					
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j+=5)
			h[j+1]=0,h[j+2]=0,h[j+3]=0,h[j+4]=0,h[j+5]=0;
		for(int j=i;j<=n;j++){
			if(h[a[j]]&&z[h[a[j]]]==a[j]&&h[a[j]]<=d)d=h[a[j]];
			else z[++d]=a[j],h[a[j]]=d;
		}
		while(d)ans[z[d--]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
