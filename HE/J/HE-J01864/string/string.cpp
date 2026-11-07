#include<bits/stdc++.h>
using namespace std;
string s;
long long t,n,x,y;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t>>c;
		for(int j=1;j<=t;j++) s[++x]=c;
	}
	for(long long i=1;i<=x/2;i++){
		if(s[i]!=s[x-i+1]) y++;
	}
	cout<<y;
	return 0;
}
