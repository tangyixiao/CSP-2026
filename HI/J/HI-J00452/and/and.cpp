#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	else{
		cout<<a[n-m+1];
	}
	return 0;
} 
