#include<bits/stdc++.h>
using namespace std;
int n,m,x,z,t,a[500005],b[500005],c[500005],d[500005],sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
	int g=1; 
	int r=0; 
	x=i;
	z=1;
	t=0;
	
	for(int e=1;e<=m;e++){
		b[e]=0;
	}
	
	while(x<=n){
	b[a[x]]++;
	if(b[a[x]]==1){
		d[a[x]]=z;
	}
	c[z]=a[x];
	if(b[a[x]]==2){
		g=z;
		if(r==0&&t==0){
		r=d[a[x]]-1;	
		t=1;	
		}
		else r=min(r,d[a[x]]-1);
		
		b[a[x]]--;
	}
	x++;
	z++;
	}
	z--;
	for(int j=g;j<=z;j++){
		sum[c[j]]++;
	}	
	for(int j=r;j>=1;j--){
		sum[c[j]]++;
	}
	}
	
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<' ';
	}
	return 0;
}
