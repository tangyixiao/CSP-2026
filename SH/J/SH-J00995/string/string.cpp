#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
long long t=0,cnt=0;
char s[600000010];char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>t>>b;
		for(long long j=0;j<t;j++){
			s[cnt]=b;
			cnt++;
		}
	}
	t=cnt;
	if(cnt%2==0) cnt/=2;
	if(cnt%2==1) cnt=(cnt-1)/2;
	for(long long i=0;i<cnt;i++){
		if(s[i]!=s[t-i-1]) ans++;	
	}
	cout<<ans;
	return 0;
}
