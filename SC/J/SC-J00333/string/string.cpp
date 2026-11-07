#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char c;
		cin>>c;
		for(int j=1;j<=a;j++)s+=c;
		if(i==n){
			for(long long k=0;k<s.length()/2;k++){
		if(s[k]!=s[s.length()-k-1])ans++;
	}
		}
	}
	cout<<ans;
	return 0;
}
