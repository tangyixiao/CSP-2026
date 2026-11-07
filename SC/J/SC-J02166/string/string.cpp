#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,tot,ans;
struct node{
	ll x;char c;
}a[210000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	ll sum=0;
	for(int i=1,x;i<=n;i++){
		char c;
		cin>>x>>c;sum+=x;
		if(i>1&&c==a[tot].c)a[tot].x+=x;
		else a[++tot]={x,c};
	}
	ll l=1,r=tot,sl=0,sr=0;
	while(l<r){
		sl=a[l].x;sr=a[r].x;
		if(a[l].c!=a[r].c)ans+=min(sl,sr);
		if(sr>=sl){
			a[r].x-=a[l].x;
			l++;
		}else{
			a[l].x-=a[r].x;
			r--;
		}
	}
	cout<<ans;
	return 0;
}