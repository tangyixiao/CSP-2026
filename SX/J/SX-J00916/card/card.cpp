#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[1000000];
int c[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		c[a[i]]++;
	}
	for(long long i=1;i<=m;i++){
		if(c[i]%2==0) cout<<n<<" ";
		else cout<<i<<" ";
	}
	return 0;
}