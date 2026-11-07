#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i>=m;i--){
		cout<<a[i]<<" ";
	}

	return 0;
}
