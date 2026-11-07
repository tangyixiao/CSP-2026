#include <iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long k;
	string x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>k>>x;
		for(int j=0;j<k;j++)
		{
			y+=x;
		}
	}
	long long h=y.size();
	long long f=0;
	for(int i=0;i<h/2;i++)
	{
		if(y[i]!=y[h-1-i])
		{
			f++;
		}
	}
	cout<<f;
}
