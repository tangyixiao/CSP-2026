#include<bits/stdc++.h>
using namespace std;
long long n,a,ans=0;
string s="";
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	long long t=s.size();
	for(long long i=0;i<=t/2;i++){
		if(s[i]!=s[t-i-1] && i<=t-i-1){
			ans++;
			
		}
	}
	cout<<ans;
	return 0;
}
