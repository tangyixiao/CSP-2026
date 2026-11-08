#include<bits/stdc++.h>
using namespace std;
string s;
long long a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0,lll=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		char cr;
		cin>>a[i];
		cin>>cr;
		for(long long j=1;j<=a[i];j++){
			s=s+cr;
		}
		lll+=a[i];
	}
	for(long long i=0;i<lll/2;i++){
		if(s[i]!=s[lll-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
