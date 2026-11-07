#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,qzh[200003],ans,L;
struct node{
	int sum;
	char aa;
}p[200003];
int efx(int x){
	int l=1,r=n+1,mid;
	while(l<r){
		mid=ceil((l+r)*1.0/2);
		if(qzh[mid]<x) l=mid;
		else r=mid-1;
	}
	return l;
}
int efd(int x){
	int l=1,r=n,mid;
	while(l<r){
		mid=floor((l+r)*1.0/2);
		if(qzh[mid]>=x) r=mid;
		else l=mid+1;
	}
	return l;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i].sum>>p[i].aa;
	for(int i=2;i<=n+1;i++) qzh[i]=p[i-1].sum+qzh[i-1];
//	for(int i=1;i<=n;i++) cout<<qzh[i]<<" ";
//	cout<<"\n";
	L=qzh[n+1];
//	cout<<L<<"\n";
	int zl=1,zr=L,midl,midr;
	if(L%2==1){
		midl=ceil(L*1.0/2)-1;
		midr=ceil(L*1.0/2)+1;
	}
	else{
		midl=L/2;
		midr=L/2+1;
	}
//	cout<<midl<<" "<<midr<<"\n";
	while(1){
		int ll=qzh[efd(zl)],rr=qzh[efx(zr)]+1;
		
		int lenl=ll-zl+1,lenr=zr-rr+1;
		
		if(lenl>lenr) ll=zl+lenr-1;
		else rr=zr-lenl+1;
		
		if(ll>=midl) ll=midl;
		if(rr<=midr) rr=midr;
		
		
		int z1=efd(zl)-1,z2=efx(zr);
//		cout<<zl<<" "<<zr<<"\n";
//		cout<<ll<<" "<<rr<<"\n";
//		cout<<z1<<" "<<z2<<"\n\n";
		char a=p[z1].aa,b=p[z2].aa;
		if(a!=b) ans+=ll-zl+1;
		if(ll==midl&&rr==midr) break;
		zl=ll+1;zr=rr-1;
	}
	cout<<ans;
	return 0;
}
/*
5
3 a
1 b
2 a
3 c
3 a
*/