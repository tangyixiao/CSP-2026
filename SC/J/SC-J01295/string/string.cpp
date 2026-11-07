//string.cpp
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
struct node{
	ll l,r;
	string id;
}a[N],b[N];
int n;
ll ans,lst,nida,nidb;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	ll tot=0;
	for(int i=1;i<=n;i++){
		ll len;
		char opt;
		cin>>len>>opt;
		a[i].l=tot+1;
		a[i].r=tot+len;
		a[i].id=opt;
		tot+=len;
	}
	for(int i=1;i<=n;i++){
		b[i].l=tot-a[n-i+1].r+1;
		b[i].r=tot-a[n-i+1].l+1;
		b[i].id=a[n-i+1].id;
	}
	lst=1,nida=nidb=1;
	while(1){
		if(a[nida].id!=b[nidb].id)
			ans+=min(a[nida].r,b[nidb].r)-lst+1;
		if(nida==n && nidb==n){
			break;
		}
		if(a[nida].r<b[nidb].r){
			if(nida<n) lst=a[nida].r+1;
			if(nida<n) nida++;
		}
		else if(a[nida].r>b[nidb].r){
			if(nidb<n) lst=b[nidb].r+1;
			if(nidb<n) nidb++;
		}
		else{
			if(nida<n) lst=a[nida].r+1;
			if(nidb<n) nidb++;
			if(nida<n) nida++;
		}
	}
	cout<<ans/2<<"\n";
	return 0;
}