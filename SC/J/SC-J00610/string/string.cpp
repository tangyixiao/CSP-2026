#include<bits/stdc++.h>
using namespace std;
int n,a,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int i=a;i>=1;i--)	s+=c;
	}
	for(int i=0;i<=s.size()-1;i++)
	{
		if(i==(s.size()-1)/2)	break;
		if(s[i]!=s[s.size()-1-i])	ans++;
	}
	printf("%d",ans);
	return 0;
}