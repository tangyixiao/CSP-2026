#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s=" ";
	for(long long i=1;i<=n;i++){
		long long a;char b;
		cin>>a>>b;
		for(long long j=1;j<=a;j++){
			s+=b;
		}
	}
	long long ans=0;
	for(long long i=1;i<=(s.size()/2);i++){
		if(s[i]!=s[s.size()-i])ans++;
	}
	cout<<ans;
	return 0;
}