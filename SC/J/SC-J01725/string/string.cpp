#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
int n,a;
ll ans;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	ll l=0,r=s.size();
	while(l<=r){
		if(s[l]!=s[r]){
			ans+=1;
		}
		l+=1;
		r-=1;
	}
	cout<<ans;
	return 0;
}