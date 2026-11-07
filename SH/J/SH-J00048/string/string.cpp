#include<bits/stdc++.h>
using namespace std;
int n,d,m=1,k=0;
int a;
string b;
string s;
long long sum=0,psum=0,ans=0;
int main(){
	freopen("string.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++)s+=b;
	}
	for(int i=0;i<(n+1)/2;i++){
		if(s[i]!=s[n-i-1])ans++;
	}
	freopen("string.out","w",stdout);
	cout<<ans;
	return 0;
}
