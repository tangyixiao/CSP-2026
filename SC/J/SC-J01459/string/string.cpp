#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	long long cnt=0;
	long long idx=0;
	for(long long i=1;i<=n;i++){
		long long a;
		char b;
		cin>>a>>b;
		cnt+=a;
		for(int j=0;j<a;j++){
			s[idx++]=b;
		}
	}
	long long ans=0;
	for(long long i=0;i<(cnt+1)/2;i++){
		if(s[i]!=s[cnt-i-1])ans++;
	}
	cout<<ans;
	return 0;
}