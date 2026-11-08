#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5; 
ll n,a,len,cnt,t,l;
char c,s[200000008];
int main()
{
//	freopen("string1.in","r",stdin);
//	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>n; 
	for (int i=1;i<=n;i++)
	{
		cin>>a>>c;
		while (a--)
		{
			s[++len] = c;
		}
	}
	
	l = len/2;
	for(int i=1;i<=l;i++)
	{
		if (s[i] != s[len+1-i])
		{
			cnt ++;
		}
	} 
	
	cout<<cnt;
	
//	fclose(stdin);
//	fclose(stdout);
	
	return 0;
} 
