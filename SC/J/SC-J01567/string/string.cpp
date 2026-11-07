#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e4+5; 
int n,a;
char c;
string s;
int dp[MAXN][MAXN];
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; ++i) {
		cin>>a>>c;
		for(int j=1; j<=a; ++j) {
			s=s+c;
		}
	}
	for(int i=0; i<s.size(); ++i) {
		for(int j=0; j<s.size(); ++j) {
			dp[i][j]=MAXN;
		}
		dp[i][i]=0;
	}
	for(int i=0; i<s.size(); ++i) {
		for(int j=i+1; j<s.size(); ++j) {
			if(s[i]==s[j]) {
				if(i+1<s.size()) dp[i][j]=min(dp[i+1][j],dp[i][j]);
				if(j-1>0) dp[i][j]=min(dp[i][j],dp[i][j-1]);
				if(i+1<s.size()&&j-1>0) dp[i][j]=min(dp[i][j],dp[i+1][j-1]);
			}
			else dp[i][j]=min({dp[i][j],dp[i+1][j]+1,dp[i][j-1]+1,dp[i+1][j-1]+2});
		}
	}
	cout<<dp[1][n];
	return 0;
}