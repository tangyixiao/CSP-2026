#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,ans=0;
	cin>>n;
	string s;
	char c;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++)
			s+=c;		
	}
	long long cnt=1;
	for(int i=0;i<=s.size()/2-1;i++){
		if(s[i]!=s[s.size()-cnt])ans++;
		cnt++;		
	}
	cout<<ans;
	return 0;
}
