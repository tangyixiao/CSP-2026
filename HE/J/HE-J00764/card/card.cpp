#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,maxx,a[500005],s[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	 cin>>n>>m;
	 for(ll i=1;i<=n;i++){
	 	cin>>a[i];
	 	s[a[i]]=i;
	 }
	  for(ll i=1;i<=m;i++){
	  	cout<<s[i]<<" ";
	  }
	 
	 
	return 0;
	}
