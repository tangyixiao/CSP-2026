#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[500005],b[500005],c[500005];
ll d[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int r=c[a[j]];
			if(r==0) r=c[a[j]]=j;
			else{
				for(int k=r;k<j;k++){
					b[k]=1;
					c[a[k]]=0;
				}	
			}
			c[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(b[j]==0)d[a[j]]++;
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<d[i]<<' ';
}