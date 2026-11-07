#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,si=0,ans=0;
	cin>>n;
	string s="",ss="";
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
		si+=a;
	}
	for(int i=si-1;i>=0;i--){
		ss+=s[i];
	}
	if(ss==s){
		cout<<0;
		return 0;
	}
	for(int i=0;i<si/2;i++){
		if(s[i]!=s[si-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}