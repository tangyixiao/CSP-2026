#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10; 
int n,a;
char c[30];
string s[N],s1;
int res,L;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int i=1;i<=a;i++) s1=c+s1;
	}
	L=s1.size();
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s1[L/2+1-i]) res++;
	}
	cout<<res-1;
	return 0;
}