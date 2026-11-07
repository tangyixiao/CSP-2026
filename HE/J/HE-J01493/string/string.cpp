#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout);
	int n,ans=0;
	string S;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		string b;
		cin>>a>>b;
		for(int j=0;j<a;j++){
			S+=b;
		}
	}
	if(n==2){
		if(S[0]!=S[1]){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(n!=2){
	long long ls=S.size(); 
	for(int  i=0;i<ls/2;i++){
		for(int  j=ls-1;j>ls-ls/2;j--){
			if(S[i]!=S[j]){
				ans++;
			}
		}
	}
	cout<<ans;}
	return 0;
}
