#include<bits/stdc++.h>
using namespace std;
#define LL long long
string s=" ";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	LL ans=0;
	char c;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cin >>a >>c;
		for(int i=1;i<=a;i++) s+=c; 
	}
	for(int i=1,j=s.size()-1;i<=j;i++,j--) if(s[i]!=s[j]) ans++;
	cout <<ans;
}