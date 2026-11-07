#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,p[500005],p2[300005];
ll a[500005];
int ne[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		p[i]=p2[a[i]];
		p2[a[i]]=i;
	}
	memset(p2,0,sizeof(p2));
	for(int j=1;j<=n;j++){
		ne[j]=max(p[j],(ll)j+1);
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i=ne[i]){
			if(ne[i]==i+1)p2[a[i]]++;
		}
	}
	
//	for(int i=1;i<=n;i++)cout<<p[i]<<' ';
	for(int i=1;i<=m;i++)cout<<p2[i]<<' ';
}
