#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	int n,a,sum=0;
	char c;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c; 
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) sum++;
	}
	cout<<sum;
	return 0;
} 
