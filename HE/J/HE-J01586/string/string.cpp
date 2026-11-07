#include <bits/stdc++.h>
using namespace std;
int main(){
	//fropen("string.in","r",stdin);
	//fropen("strng.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++)s+=b;
	}
	long long ans;
	for(long long i=0;i<s.size();i++){
		if(s[i]!=s[n-i-1]){
			s[i]=s[n-i-1];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
