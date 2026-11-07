#include <bits/stdc++.h>
using namespace std;
const int N=5*1e5+10;
long long a[N];
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n >>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=m;i++){
		cout<<i <<' ';
	}
	return 0;
}
