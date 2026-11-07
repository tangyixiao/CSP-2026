#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll a[100005];

bool cmp(ll &a, ll &b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	ll dp=0;
	//list is 3 2 1
	//n=3, m=2
	//3 2
	//2 1
	for(int i=1;i<=n-m+1;i++){
		ll numb=a[i+1];
		for(ll j=i;j<=i+m-1;j++){
			numb=numb&a[j];
		}
		dp=max(dp,numb);
	}
	cout<<dp<<endl;
	return 0;
}
