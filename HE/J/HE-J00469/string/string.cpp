#include<bits/stdc++.h>
using namespace std;
int n,a,e,j;
string c,s,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		e+=a;
		for(int u=1;u<=a;u++)s+=c;
	}d=s;
	for(int i=0;i<e/2;i++){
		if(s[e-i-1]!=s[i])j++;
	}cout<<j;
	return 0;
}
