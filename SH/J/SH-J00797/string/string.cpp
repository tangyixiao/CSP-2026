#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int dp[23161][23161];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	string s1="";
	for(int i=0;i<s.size()/2;i++) s1+=s[i];
	string s2="";
	for(int i=s.size()-1;i>s.size()/2;i--) s2+=s[i];
	if(s1==s2){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=s.size();i++) dp[i][0]=1;
	for(int i=1;i<=s1.size();i++) dp[0][i]=1;
	for(int i=1;i<=s.size();i++){
		for(int j=1;j<=s1.size();j++){
			if(s[i]==s1[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=min(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[s.size()][s1.size()];
	return 0;
} 
