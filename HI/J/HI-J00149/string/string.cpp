#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long len=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long ans=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[s.size()-1-i]!=s[i]) ans++;
	}
	cout<<ans;
	return 0;
}

