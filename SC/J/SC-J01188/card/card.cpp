#include<bits/stdc++.h>
using namespace std;
int a[500002],b[500002],ds[300002],w[500002];
int ex(int a,int n){
	int l=1,r=n,cnt=1;
	while(l<=r){
		int mid=(l+r)/2;
		if(b[mid]==a){
			w[cnt]=mid;
			cnt++;
		}
		else if(b[mid]>a) r=mid-1;
		else if(b[mid]<a) l=mid+1;
	}
	sort(w+1,w+1+cnt);
	return w[1];
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int c=1,d;
	while(c<=n){
		d=1;
		for(int i=c;i<=n;i++){
			b[d]=a[i];
			if(ex(b[d],n)!=d) d=(ex(b[d],n));
			d++;
		}
		for(int i=1;i<=d;i++) ds[b[i]]++;
		for(int i=1;i<=n;i++) b[i]=0;
		c++;
	}
	for(int i=1;i<=m;i++) cout<<ds[i]<<" ";
	return 0;
}