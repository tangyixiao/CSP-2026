#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s;
string a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int c;
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++)
	{
		cin>>c>>s;
		for(int j=1;j<=c;j++)
		{
			k++;
			a[k]+=s;
		}
	}
	int al=0,sum=0;
	if(k%2==0)
	{
		al=k/2;
	}
	else
	{
		al=k/2+1;
	}
	for(int i=1;i<al;i++)
	{
		if(a[i]!=a[k])
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
