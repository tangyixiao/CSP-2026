#include<bits/stdc++.h>
using namespace std;
int n,c,a;
string s="";
char b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++)s+=b;
	}
	int l=s.size()-1;
	for(int i=0;i<=l/2;i++){
		if(s[i]!=s[l-i])c++;
	}
	cout<<c;
}
