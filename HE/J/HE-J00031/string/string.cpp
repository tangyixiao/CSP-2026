#include<bits/stdc++.h>
using namespace std;
long long n,l,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		char c;
		long long a;
		cin>>a>>c;
		for(long long o=0;o<a;o++)s+=c;
	}
	l=s.size();
	for(long long i=0;i<l/2;i++)
		if(s[i]!=s[l-i-1])ans++;
	cout<<ans;
	return 0;
} 
