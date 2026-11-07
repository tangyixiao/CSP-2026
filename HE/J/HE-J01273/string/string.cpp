#include <iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string k="";
	for(int i=1;i<=n;i++)
	{
		int d;
		cin>>d;
		string s;
		cin>>s;
		for(int j=1;j<=d;j++)
		{
			k+=s;
		}
	}
	int l=k.size();
	int sum=0;
	for(int i=0;i<l;i++)
	{
		if(k[i]!=k[l-i-1])
		{
			k[l-i-1]=k[i];
			sum++;
		}
	}
	cout<<sum;
}
