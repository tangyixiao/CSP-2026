#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	long long len1=s.size();
	long long ans=0;
	for(int i=0;i<=len1/2;i++){
		if(s[i]!=s[len1+1-i]){
			ans++;
			s[len1+1-i]=s[i];
		}
	}
	cout<<ans;
	return 0;
} 