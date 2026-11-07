#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
long long t,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	while(t--){
		long long n;char x;cin>>n>>x;
		while(n--)s+=x;
	}
	for(int i=0;i<s.size()/2;i++)s1+=s[i];
	if(s.size()%2==0){
		for(int i=s.size()-1;i>=s.size()/2;i--)s2+=s[i];
	}else{
		for(int i=s.size()-1;i>s.size()/2;i--)s2+=s[i];
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])ans++;
	}
	cout<<ans;
	return 0;
} 