#include<bits/stdc++.h>
const int N=1e8+7;
using namespace std;

long long dp[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	
	while(n--){
		int x;
		string c;
		cin>>x>>c;
		for(int i=1;i<=x;i++) s+=c;
	}
	
	int l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]==s[l-i-1]) dp[i]=dp[i-1];
		else {
			dp[i]=dp[i-1]+1;
			s[i]=s[l-i-1];
		}
	}
	
	cout<<dp[l-1]<<endl;
	
	return 0;
}
