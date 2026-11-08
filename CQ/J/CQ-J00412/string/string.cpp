#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	string s;
	int cup=0;
	int ans=0;
	int n;
	cin>>n;
	char b[190005];
	int sum[190005];
	for(int i=1;i<=n;i++){
		cin>>sum[i]>>b[i];
		for(int j=1;j<=sum[i];j++){
			cup++;
			s[cup]=b[i];
		}
	}
	int o=cup;
	for(int i=1;i<=cup;i++){
			if(s[i]!=s[o]){
				s[o]=s[i];
				ans++;
			}
			o--;
	}
	cout<<ans;
	return 0;
} 
