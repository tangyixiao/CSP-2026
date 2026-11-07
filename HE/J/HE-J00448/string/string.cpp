#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	int len=s.size(),ans=0;
	s=" "+s;
	for(int i=1;i<=(len+1)/2;i++){
		if(s[i]!=s[len+1-i])ans++;
	}
	cout<<ans;
	return 0;
}
