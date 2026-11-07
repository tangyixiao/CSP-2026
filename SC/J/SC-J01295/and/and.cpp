//and.cpp
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
bool cmp(ll a,ll b){
	return a>b;
}
ll n,m,a[N];
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	ll b=a[1];
	for(int i=2;i<=m;i++)
		b=b & a[i];
	cout<<b<<"\n";
	return 0;
}