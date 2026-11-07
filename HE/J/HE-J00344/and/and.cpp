#include<bits/stdc++.h>
#define ll long long
using namespace  std;
const int N=2e5+7;
ll n,m;
ll sum;
struct node{ll x,y;}a[N];
bool cmp(node u,node v){
	if(u.y==v.y) return u.x>v.x;
	return u.y>v.y;
}
string to(ll k){
	string s="";
	while(k){
		s+=to_string(k%2);
		k>>=1;
	}
	reverse(s.begin(),s.end());
	return s;
}
int shu(ll k){
	string w=to(k);
	w="#"+w;
	ll cnt=0;
	for(int i=1;i<=w.size();i++){
		if(w[i]=='0'){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].y=shu(a[i].x);
	}
	sort(a+1,a+1+n,cmp);
	for(int i=2;i<=m;i++){
		a[1].x&=a[i].x;
	}
	cout<<a[1].x;
	return 0;
}
