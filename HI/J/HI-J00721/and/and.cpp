#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll a[200005];
ll cnt=2147683647;
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<m;i++){
		cnt&=a[i];
	}
	cout<<cnt;
	return 0;
}
