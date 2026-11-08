#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	int a;
	char c;
	string dp;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			dp[j]=c;
		}
	}
	for(int i=1;i<=n;i++){
		if(dp[i]==dp[i+1]){
			sum++;
		}
	}
	if(sum==n){
		cout<<0;
	}
	return 0;
}
