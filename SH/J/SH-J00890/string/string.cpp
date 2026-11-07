#include<bits/stdc++.h>
using namespace std;
void init(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
}
int n,l,suml,ans;
char x;
string s;
int main(){
	init();
	s+='a';
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l>>x;
		suml+=l;
		for(int k=1;k<=l;k++)s+=x;
	}
	for(int i=1;i<=suml/2;i++){
		if(s[i]!=s[suml-i+1])ans++;
	}
	cout<<ans;
	return 0;
}

