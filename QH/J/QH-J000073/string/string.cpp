#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull n,ans=0;

bool is_huiwen(string s){
	ull a=0,b=s.length()-1;
	for(ull i=0;a<b;i++){
		if(s[a++]!=s[b--]){
			return 0;
		}
	}
	return 1;
	
	
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);

	
	cin>>n;
	string s="";
	
	for(ull i=1;i<=n;i++){
		ull ni;
		cin>>ni;
		char ci;
		cin>>ci;
		for(ull j=0;j<ni;j++)s+=ci;
	}
	
	if(n==1){
		cout<<0;
		return 0;
	}
	
	while(!is_huiwen(s)){
		ull a=0,b=s.length()-1;
		for(ull i=0;a<b;i++){
			if(s[a]!=s[b]){
				s[b--]=s[a++];
				ans++;
			}
		}
	}
	cout<<ans;
	
	return 0;
}
