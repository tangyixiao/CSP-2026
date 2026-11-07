#include<bits/stdc++.h>
#define AC return 0
using namespace std;
using ll=long long;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);cout.tie(0);
	ll n;cin>>n;vector<ll>a(n+1,0),d(n+1);vector<char>b(n+1);ll len=0;
	for(ll i=1;i<=n;i++)cin>>d[i]>>b[i],len+=d[i],d[i]+=d[i-1],a[i]=d[i-1]+1;
	ll ct=len/2;
	for(ll i=1;a[i]<=len/2;i++){
		ll l1=len+1-d[i],r1=len+1-a[i];
		if(d[i]>ct)l1=len+1-ct;
		ll l=1,r=n,p;
		while(l<=r){
			ll mid=(l+r)>>1;
			if(d[mid]<l1)l=mid+1;
			if(d[mid]>l1)p=mid,r=mid-1;
			if(d[mid]==l1){p=mid;break;}
		}for(ll j=p;r1>=a[j];j++){
			if(b[i]!=b[j])continue;
			if(a[j]<ct)a[j]=ct+1;
			ll js=min(d[j],r1)-max(a[j],l1)+1;
			ct-=js;
		}
	}cout<<ct;
	AC;
}