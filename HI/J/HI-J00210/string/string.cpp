#include<bits/stdc++.h>
using namespace std;
long long n,p=0;
long long dp[10010][10010];
struct node{
	string c;
	long long a;
}b[200005];
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i].a>>b[i].c;
		if(p==0) p=b[i].a;
		else p=__gcd(b[i].a,p);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=b[i].a/p;j++){
			s+=b[i].c;
		}
	}
	for(int i=0;i<s.size();i++){
		dp[i][i]=0;
		if(s[i]==s[i+1]) dp[i][i+1]=0;
		else dp[i][i+1]=1;
	}
	for(int len=2;len<s.size();len++){
		for(int l=0;l+len<s.size();l++){
			int r=l+len;
			if(s[l]!=s[r]) dp[l][r]=dp[l+1][r-1]+1;
			else dp[l][r]=dp[l+1][r-1];
		}
	}
	cout<<dp[0][s.size()-1]*p;
	return 0;
}
