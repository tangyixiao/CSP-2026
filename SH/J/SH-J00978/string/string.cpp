#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,ans=0;
	char c;
	cin>>n;
	int l=1;
	for(int i=1;i<=n;i++,l+=a){
		cin>>a>>c;
		s[l] = c;
	}
	l-=1;
	char r;
	for(int i=1;i<=l;i++){
		if(i==1){
			r = s[i];
			continue;
		}
		if(s[i]<=98 && s[i] >= 72){
			r = s[i];
		}
		else{
			s[i] = r;
		}
	}
	int g;
	if(l % 2 == 1){
		l /= 2;
		g = l+1;
	}
	else{
		l /= 2;
		g = l;
	}
	for(int i=1;i<=l;i++){
		if(s[i] != s[i+g]){
			ans+= 1;
		}
	}
	cout<<ans;
	return 0;
}
