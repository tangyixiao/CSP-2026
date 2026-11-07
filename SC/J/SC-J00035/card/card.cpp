#include<bits/stdc++.h>
using namespace std;
long long a[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<m<<" "<<a[m]<<" "<<a[n];
	return 0;
}