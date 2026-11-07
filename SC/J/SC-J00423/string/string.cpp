#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll a;
		char c;
		cin>>a>>c;
		str+=string(a,c);
	}
	int i=0,j=str.size()-1;
	ll ans=0;
	while(i<j){
		if(str[i]!=str[j])
			ans++;
		i++,j--;
	}
	cout<<ans<<'\n';
	return 0;
}