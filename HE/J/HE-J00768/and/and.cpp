#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll s=0,ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	s=a[1]&&a[2];
	cout<<s;
	

	
	return 0;
}
