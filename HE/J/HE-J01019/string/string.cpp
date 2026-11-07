#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e8+10+10;
int n,a,len;

char c,s[N];
int yet;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>c;
		
		for(int i=1;i<=a;i++)
		{
			s[++len]=c;
//			if(s[len])
		}
	}
	
//	cout<<"len="<<len<<endl;
	for(int i=1;i<=len/2;i++)
	{
		if(s[i]!=s[len+1-i])
		{
			yet++;
		}
	}
	
	cout<<yet;
	return 0;
}
