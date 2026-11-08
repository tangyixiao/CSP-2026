#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int k1=0,k2=0;
	for(int i=1;i<=n;i++){
		int t;
		char ch;
		cin>>t>>ch;
		for(int i=1;i<=t;i++) s=s+ch;
	}
	int len=s.size();
	int sum=0;
	for(int i=0;i<(len+1)/2;i++){
		if(s[i]!=s[len-i-1]) sum++;
	}
	cout<<sum;
	return 0;
}

