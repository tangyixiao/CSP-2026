#include<bits/stdc++.h>
using namespace std;
int n,a[200002];
char c[200002];
string s;
long long ans=0,t;
void p(int k,char q){
	while(k--){
	s=s+q;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s=s+'0';
	for(int i=1,j=n;i<=n,j>=1;i++,j--){
		cin>>a[i]>>c[i];
		p(a[i],c[i]);
		t+=a[i];
	}
	for(long long i=1,j=t;i<=t/2;i++,j--){
		if(s[i]!=s[j]) ans++;
	}
	cout<<ans;
	return 0;
}