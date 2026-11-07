#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,t,ans=0,cnt=0;
	string s,s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		cnt+=t;
		cin>>s1;
		for(int j=1;j<=t;j++){
			s+=s1;
		}
	}
	for(int i=0;i<=cnt;i++){
		if(s[i]!=s[cnt-i-1]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
} 