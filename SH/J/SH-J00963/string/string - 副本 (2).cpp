#include<bits/stdc++.h>
using namespace std;
long long n,p,l,x,ans;
char ch;
string S="0";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>ch;l+=p;
		for(int j=1;j<=p;j++){
			S+=ch;
		}
		
	}
	for(int i=1;i<=l/2;i++){
		if(S[i]!=S[l+1-i]) ans++;
		
	}
	cout<<ans;
	
	return 0;
}
