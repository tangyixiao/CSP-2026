#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	s[0]=' ';
	for(long long i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c; 
		for(long long i=1;i<=a;i++){
			s+=c;
		}
	}
	long long m=s.size()-1;
	long long ans=0;
	for(long long i=1;i<=m;i++){
		if(s[i]==s[m+1-i])continue;
		s[m+1-i]=s[i];
		ans++;
	}
	cout<<ans;
	return 0;
}