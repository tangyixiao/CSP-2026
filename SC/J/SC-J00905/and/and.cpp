#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;

int main(){
	//freopen("string6.in","r",stdin);
	//freopen("string.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>n>>m;
	vector<ll> A(n); 
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	ll maxn=-1e18;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			ll a=A[i];
			ll b=A[j];
			//cout<<a<<b;
			ll xora=a|b;
			maxn=max(maxn,xora);
		}
	}
	cout<<maxn;
    return 0;
}

