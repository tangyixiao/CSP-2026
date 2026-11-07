#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string s;
	getline(cin,s);
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(s[i]>m){
			break;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int k=n;k>=0;k--){
			for(int j=1;j<=n;j++){
			if(s[i]==s[i-j]){
				s.erase(s[i],s[j]);
				s[i]=s[i++];
			} 
		}
		}
		cout<<ans;
		ans=0;
	}
	return 0;
} 
