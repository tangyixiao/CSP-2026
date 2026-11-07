#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
char a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,d=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		ll x;
		char y;
		cin>>x>>y;
		for(int j=d+1;j<=d+x;j++){
			a[j]=y;
		}
		d+=x;
	}
	for(int i=1;i<=d/2;i++){
		if(a[i]!=a[d-i+1]){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
