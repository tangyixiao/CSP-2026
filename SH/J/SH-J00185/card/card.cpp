#include<bits/stdc++.h>
using namespace std;
int n,m,a[505],cnt[205];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) {
	  int d[205]={},tail=0,t[505]={};
	  for(int j=i;j<=n;j++) {
	  	if(d[a[j]]) {
	  	  for(int k=tail;k>=d[a[j]]+1;k--) 
	  	    d[a[k]]=0,t[k]=0,tail--;
	  	  t[tail+1]=a[j],d[a[j]]=tail+1,tail++;
		}
		else t[tail+1]=a[j],d[a[j]]=tail+1,tail++;
	  }
	  for(int j=1;j<=m;j++) if(d[j]) cnt[j]++;
	}
	for(int i=1;i<=m;i++)
	  cout<<cnt[i]<<' ';
	return 0;
}

