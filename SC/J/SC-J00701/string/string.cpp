#include<bits/stdc++.h>
using namespace std;
int l,t;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,maxx=-1;
	cin>>n;
	int b[n+1];
	char c[n+1];
	for(int i=1;i<=n;i++){
	
		cin>>b[i]>>c[i];
		if(b[i]>maxx)maxx=b[i];
	}
	char s[maxx*n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=b[i];j++){
			s[++l]=c[i];
		}
	}
//	for(int i=1;i<=l;i++)cout<<s[i];
	for(int i=1;i<=l;i++){
		if(s[i]!=s[l+1-i])t++;
	}
	cout<<t/2;
	return 0;
}