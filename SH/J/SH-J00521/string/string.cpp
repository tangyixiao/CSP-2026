#include<bits/stdc++.h>
using namespace std;
long long n,sum,cnt=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(long long t,i=1;i<=n;i++){
		cin>>t>>c;
		sum+=t;
		for(int j=1;j<=t;j++) s+=c;
	}
	for(long long i=1;i<=sum;i++){
		if(s[i]!=s[sum+1-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
