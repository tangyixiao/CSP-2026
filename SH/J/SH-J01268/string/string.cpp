#include<bits/stdc++.h>
using namespace std;
long long a,b,n,m;
string s;
char c;
int ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b;
		n+=b;
		cin>>c;
		for(int j=1;j<=b;j++){
			s+=c;
		}
	}
	int m=n-1;
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[m]) ans++;
		m--;
	}
	cout<<ans;
return 0;
}
