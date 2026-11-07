#include<bits/stdc++.h>
using namespace std;
string s;
unsigned long long n,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int z;
		string a;
		cin>>z>>a;
		for(int j=1;j<=z;j++) s+=a;
	}
	unsigned long long len=s.size();
	unsigned long long l=(len+1)/2;
	for(unsigned long long i=0;i<l;i++){
		if(s[i]!=s[len-i-1]) ans++;
	}
	cout<<ans;
	return 0;
} 

