#include<bits/stdc++.h>
using namespace std;
char s[1000010]; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char s1;
	long long h=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	 	cin>>a>>s1;
	 	for(int j=h+1;j<=h+a;j++)
	 		s[j]=s1;
	 	h+=a;
	}
	long long ans=0;
	for(int i=1;i<=h/2;i++)
	{
		if(s[i]!=s[h+1-i])
			ans++;
	}
	cout<<ans;
	return 0;
}