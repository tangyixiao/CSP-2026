#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		long long x;
		char ai;
		cin>>x>>ai;
		for(int j=1;j<=x;j++){
			s+=ai;
		}
	}
	long long ans=0;
	for(int i=1;i<=s.size();i++){
		if(s[i-1]!=s[s.size()-i]){
			s[s.size()-i]=s[i-1];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
