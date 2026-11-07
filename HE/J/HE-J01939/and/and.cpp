#include <bits/stdc++.h>
using namespace std;
//string s;
int dp[100050];
int a[100050];
//void ans(int n,string &s){
//	string s1="";
//	while(n!=0){
//		s1=s1+((n%2)+'0');
//	}
//	for(int i=0;i<s1.size();i++){
//		s[i]=(s[i]-'0')+(s1[i]-'0')+'0';
//	}
//}
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j==1) dp[j]=max(dp[j],a[i]);
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	return 0;
} 
