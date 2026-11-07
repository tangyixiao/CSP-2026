#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct str{
	ll a,l;
	string s;
}num[200005];
ll n,m,ans=0,p=0;
string s[200005];
bool cmp(str x,str y){
	if(x.l!=y.l) return x.l>y.l;
	else return x.s>y.s;
}
string turn(ll x){
	string bit="";
	while(x){
		bit=char(x%2+'0')+bit;
		x/=2;
	}
	return bit;
}
bool check(string x){
	bool flag=1;
	for(ll i=1;i<x.size();i++) if(x[i]=='1') flag=0;
	return flag;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i].a;
		string k=turn(num[i].a);
		num[i].s=k;
		num[i].l=k.size();
	}
	sort(num+1,num+n+1,cmp);
	for(ll i=1;i<=n;i++){
		if(check(num[i].s)==1) continue;
		m--;
		if(p==0) p=num[i].a;
		ans=int(num[i].a&p);
		p=num[i].a;
		if(m==0) break;
	}
	cout<<ans;
	return 0;
}