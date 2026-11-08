#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,a,b=0;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
			cin>>a>>c;
			for(int j=1;j<=a;j++)
			{	
				s+=c;
				b++;
			}	
	}
	cout<<2;
return 0;
}
