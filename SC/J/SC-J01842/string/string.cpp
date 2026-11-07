#include<bits/stdc++.h>
using namespace std;
int a;
string c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int len=0;
	for (int i=1;i<=n;i++){
		cin>>a>>c;
		len+=a;
		for (int j=1;j<=a;j++)s+=c;
	}
	int l=len/2;
	int ans=0;
	for (int i=0;i<l;i++){
		if (s[i]!=s[len-1-i])
			ans++;
	}
	cout<<ans;
	return 0;
}