#include<bits/stdc++.h> 
using namespace std;
string s("0");
long long cnt,i,l,n,x,j;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x>>c;
		l+=x;
		for(j=1;j<=x;j++)
			s+=c;
	}
	for(i=1;i<=l/2;i++)
		if(s[i]!=s[l+1-i])
			cnt++;
	cout<<cnt; 
	return 0;
}
