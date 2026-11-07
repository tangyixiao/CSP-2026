#include <bits/stdc++.h>
using namespace std;
string s;
long long n,x[200005],ans,t;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x[i];j++){
			s[t++]=c[i];
		}
	}
	for(int i=0;i<t/2;i++){
		if(s[i]!=s[t-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}