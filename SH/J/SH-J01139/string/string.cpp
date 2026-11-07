#include<bits/stdc++.h>
using namespace std;
string S="";
int n,T,dp[200005][200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>T;
	for(int i=1;i<=T;i++){
		int x;
		char a;
		cin>>x>>a;
		for(int j=1;j<=x;j++)   S+=a;
	}
	n=S.length();
	for(int i=0;i<n;i++)    dp[i][i]=0;
	for(int i=0;i<n-1;i++){
		if(S[i]==S[i+1])   dp[i][i+1]=0;
		else   dp[i][i+1]=1;
	}
	for(int len=3;len<=n;len++){
		for(int i=0;i+len-1<n;i++){
			int j=i+len-1;
			if(S[i]==S[j])   dp[i][j]=dp[i+1][j-1];
			else   dp[i][j]=dp[i+1][j-1]+1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	} 
	cout<<dp[0][n-1];
	return 0;
	fclose(stdin);
	fclose(stdout);
}
