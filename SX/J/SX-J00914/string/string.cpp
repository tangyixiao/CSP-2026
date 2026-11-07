#include<bits/stdc++.h>
using namespace std;
long long n,a;
char c;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++)s+=c;
	}
	long long len=s.size(),ans=0;
	for(int i=0;i<=len/2;i++){
		if(s[i]!=s[len-i-1])ans++,s[i]=s[len-i-1];
	}
	cout<<ans;
	cout<<endl;
	return 0;
}