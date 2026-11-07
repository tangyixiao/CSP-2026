#include <bits/stdc++.h>
using namespace std;
long long n,a,ans;
string b,s="",r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1; i<=n; i++){
		cin>>a>>b;
		for(long long j=1; j<=a; j++)
			s=s+b; 
		}
		
	int l=s.size();
	for(long long i=l-1; i>=0; i--)
		r=r+s[i];
		
	if(l%2==0){
		for(long long i=0; i<l/2; i++){
			if(s[i]!=r[i])
				ans++;
			}
		}
	else{
		for(long long i=0; i<=l/2; i++){
			if(s[i]!=r[i])
				ans++;
			}
		}
	cout<<ans;		
	return 0;
}