#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);		
	freopen("string.out","w",stdout);
	int n,cnt=0;
	int a[200010],c[200020];
	int dp[200010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	string s[20000010];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[j]=c[i];	
			cnt++;
		}
	}
	dp[0]=dp[1]=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=cnt;j++){
			dp[i]=2;
			if(s[2]==s[i]||s[1]==s[i-1]) dp[i]=dp[i-1]+1;
		}
	}
	cout<<dp[n];
	return 0;
}
