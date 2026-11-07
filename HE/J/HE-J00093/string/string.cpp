#include<bits/stdc++.h>
using namespace std;
int n,x,ans=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>x>>c;
		while(x--) s+=c;
	}
	int l=s.size();
	s=" "+s;
	for(int i=1;i<=(l+1>>1);i++){
		if(s[i]!=s[l-i+1]) ans++;
	}
	cout<<ans;
	return 0;
} 
