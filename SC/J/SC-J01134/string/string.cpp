#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,ans;
char b;
string s,sq,sh;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++) s+=b;
	}
	if(s.size()%2==0){
		for(int i=0;i<s.size()/2;i++) sq+=s[i];
		for(int i=s.size()-1;i>=s.size()/2;i--) sh+=s[i];
	}else{
		for(int i=0;i<s.size()/2;i++) sq+=s[i];
		for(int i=s.size()-1;i>s.size()/2;i--) sh+=s[i];
	}
	for(int i=0;i<sq.size();i++){
		if(sq[i]!=sh[i]) ans++;
	}
	cout<<ans;
	return 0;
}