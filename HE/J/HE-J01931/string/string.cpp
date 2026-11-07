#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,a,p;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	if(s.size()%2==0) p=s.size()/2;
	else p=(s.size()+1)/2;
	for(long long i=0;i<p;i++){
		if(s[i-1]!=s[s.size()-i]&&i!=0) ans++;
	}
	cout<<ans+1;
	
	return 0;
 } 
