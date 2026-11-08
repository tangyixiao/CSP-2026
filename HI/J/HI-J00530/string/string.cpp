#include<iostream>
using namespace std;
#define int long long

signed main()
{
	freopen("string1.in","r",stdin);
	freopen("string1.out","w",stdout);
	int n; cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		string s;
		cin>>a>>s;
		string sum;
		for(int j=1;j<=a;j++)
		{
			sum+=s;
		}
		cout<<sum;
	}
	return 0;
}
