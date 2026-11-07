#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ll cnt1 = a[n];
	for(int i = 1;i<=m;i++){
		cnt1 = a[n-i+1]&cnt1;
	}
	ll cnt2;
	int c = lower_bound(a+1,a+n+1,a[n])-a-1;
	cnt2 = a[c];
	for(int i = 1;i<=m;i++){
		cnt2 = cnt2&a[c-i+1];
	}
	cout<<max(cnt1,cnt2);
	return 0;
}