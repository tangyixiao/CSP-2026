#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int a[200005];
long long n,cnts=0,ans=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		cnts+=a[i];
		for(int j=1;j<=a[i];j++)s+=c;
	}
	for(int i=1;i<=cnts/2;i++){
		if(s[i-1]!=s[cnts-i]){
			s[cnts-i]=s[i-1];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
