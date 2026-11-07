#include <bits/stdc++.h>
using namespace std;
long long ans=0,sum=0;
string a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
 	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int b;
		char c;
		cin>>b>>c;
		for(int i=0;i<b;i++)
		{
			a+=c;
		}
		ans+=b;
	}
	int i=0,j=ans-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			sum++;
			i++;
			j--;
		}
		else
		{
			i++;
			j--;
		}
	}
	cout<<sum;
	return 0;
}