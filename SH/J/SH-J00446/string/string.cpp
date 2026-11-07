#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int d[n+1];
	string e[n+1];
	for(int i=1;i<=n;i++) cin>>d[i]>>e[i];
	if(n==1||e[1]==e[2]) cout<<0;
	else cout<<1;
	return 0;
}

