#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Sum;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,o;
	char c;
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>o>>c;
		S.append(o,c);
	}
	ll i = S.size();
	for(ll j=1;j<=i/2;j++){
		if(S[j-1]!=S[i-j]){
			Sum++;
		}
	}
	cout<<Sum;
	return 0;
} 
