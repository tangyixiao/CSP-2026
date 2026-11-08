#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
char b[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int t=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		t+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)
			s+=b[i];
	}
	int ans=0;
	for(int i=0;i<t/2;i++){
		if(s[i]!=s[t-i-1])
			ans++;
	}
	cout<<ans;
	return 0;
}
