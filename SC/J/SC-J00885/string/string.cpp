#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,ans=0;
	string s,s1,s2;
	char b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	for(int i=0;i<s.size()/2;i++) s1+=s[i];
	if(s.size()%2==0){
		for(int i=s.size()/2;i<s.size();i++) s2+=s[i];
		reverse(s2.begin(),s2.end());
		for(int i=0;i<s.size()/2;i++){
			if(s1[i]!=s2[i]) ans++;
			cout<<ans;
		}
	}
	else{
		for(int i=s.size()/2+1;i<s.size();i++) s2+=s[i];
		reverse(s2.begin(),s2.end());
		for(int i=0;i<s.size()/2;i++){
			if(s1[i]!=s2[i]) ans++;
		}
		cout<<ans;
	}
	return 0;
}