#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt=0,cnt1=0;
string s;
void r(string k){
	ll o=k.size();

	
	for(size_t i=0;i<o/2;i++){
		if(k[i]!=k[o-1-i]){
			cnt++;
			
		}
	}
	//Trick||Treat!
}
int main(){
	//freopen("string5.in","r",stdin);
	//freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll a;
		char c;
		cin>>a>>c;
		s+=(a,c);
		cout<<s;
	}
	r(s);
	cout<<cnt;
	
}
