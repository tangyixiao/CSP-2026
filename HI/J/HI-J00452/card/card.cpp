#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cout<<n<<" ";
	}
	return 0;
} 
