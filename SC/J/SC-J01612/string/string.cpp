#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
struct node{
	ll s;
	char c;
}k[200005];
ll n,s,len=1,ans=0;
char c;
ll read(){
	char a;
	a=getchar();
	while(a<'0'||a>'9') a=getchar();
	ll ret=0;
	while(a>='0'&&a<='9'){
		ret=ret*10+a-'0';
		a=getchar();
	}
	return ret;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	k[1].s=read();
	k[1].c=getchar();
	for(ll i=2;i<=n;i++){
		s=read();
		c=getchar();
		if(c==k[len].c) k[len].s+=s;
		else{
			len++;
			k[len].s=s;
			k[len].c=c;
		}
	}
	ll l=1,r=len;
	while(l<r){
		if(k[l].s>=k[r].s){
			if(k[l].c!=k[r].c) ans+=k[r].s;
			k[l].s-=k[r].s;
			if(k[l].s==0) l++;
			r--;
		}else{
			if(k[l].c!=k[r].c) ans+=k[l].s;
			k[r].s-=k[l].s;
			l++;
		}
	}
	cout<<ans;
	return 0;
}