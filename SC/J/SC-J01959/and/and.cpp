#include<bits/stdc++.h>
using namespace std;
int R[32];
int n,k,a[200005],l,m,r,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	R[0]=1;
	for(int i=1;i<=30;i++)R[i]=R[i-1]*2;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	int i=1,j=n;
	for(int u=30;u>=0;u--){
		sort(a+i,a+j+1);
		l=i,r=j;
		while(l<r){
			m=(l+r)>>1;
			if(a[m]>=R[u])r=m;
			else l=m+1;
		}
		if(a[l]<R[u])continue;
		for(int v=l;v<=j;v++)a[v]-=R[u];
		if(j-l+1<k)continue;
		else{
			ans+=R[u];
			i=l;
		}
	}
	cout<<ans;
	return 0;
}