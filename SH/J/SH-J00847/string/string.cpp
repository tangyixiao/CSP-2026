#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	unsigned long long cnt=0,ans=0;
	for(int i=1;i<=n;i++){
		char a;int x;
		cin>>x>>a;
		for(int j=1;j<=x;j++){
			s+=a;
		}
		cnt+=x;
	}
	for(unsigned long long i=0;i<cnt/2;i++){
		if(s[i]!=s[cnt-i-1])ans++;
	}
	cout<<ans;
	return 0;
} 
