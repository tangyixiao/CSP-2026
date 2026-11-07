#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+9;
ll m,n,a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	for(ll i=1;i<=m;i++)cout<<n-i<<' ';
	return 0;
}
