#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s="";
	int n,L=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		L+=a;
		for(int j=1;j<=a;j++)s+=c;
	}
	int ans=0;
	for(int i=0;i<=L/2-1;i++)
	{
		if(s[i]!=s[L-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
