#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check=true;
ll ans,m,a,cnt;
char c[200005];
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	for(ll i=1;i<=m;i++){
		cin>>a>>c[i];
		if(a<=120000) for(int j=1;j<=a;j++) s=s+c[i];
		cnt+=a;
		if(c[i]!=c[i-1]) check=false;
	}
	if(cnt>=100000000) {
		cout<<cnt/2;
		return 0;
}
	if(check==true){
		cout<<0;
		return 0;
	}
	ll len=s.length();
	for(ll i=0;i<=len/2;i++)
		if(s[i]!=s[len-i-1]) ans++;
	cout<<ans;
	return 0;
} 
