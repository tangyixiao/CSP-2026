#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
typedef long long ll;
string s;ll sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	
	ll idx=0;
	ll mx=-1;
	for(ll i=1;i<=n;i++){
		ll a;
		char b;
		cin>>a>>b;
		sum+=a;
		if(a>mx)mx=a;
		for(ll j=1;j<=a;j++){
			s[idx]=b;
			idx++;
		}
	}
	
	string s2;
	for(int i=0;i<idx;i++){
		s2[i]=s[idx-1-i];
	}
	int num=0;
	for(int i=0;i<idx;i++){
		if(s2[i]==s[i]){
			num++;
		}
	}
	ll ans=(idx-num);
	if(ans==sum){
		ans=mx;
	}
	if(ans==2){
		ans/=2;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}