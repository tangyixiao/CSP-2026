#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c; 
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	long long l=s.size();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
