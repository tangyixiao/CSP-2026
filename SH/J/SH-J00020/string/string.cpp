#include <bits/stdc++.h>
using namespace std;

int n,ans;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char p;
		cin>>x>>p;
		for(int j=1;j<=x;j++){
			s=s+p;
		}
	}
	int len=s.length();
	for(int i=0;i<=len/2;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
} 
