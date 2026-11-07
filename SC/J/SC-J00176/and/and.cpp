#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll n,m,ans;
struct Node{
	ll one,num;
}a[N];
bool cmp(Node x,Node y){
	if(x.one!=y.one){
		return x.one>y.one;
	}else{
		return x.num>y.num;
	}
}
ll popcount(ll x){
	ll cnt=0;
	while(x>1){
		cnt+=x%2;
		x/=2;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].one=popcount(a[i].num);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		a[i+1].num&=a[i].num;
	}
	cout<<a[m].num;
}