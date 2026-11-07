#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int t[200009]={0};
	char c[200009];
	long long cnt=0;
	for(int i=1;i<=n;++i)
	{
		cin>>t[i]>>c[i];
		cnt+=t[i];
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		if(c[1]==c[2])
		{
			cout<<0;
			return 0;
		}
		else
		{
			int w=t[1]+t[2];
			cout<<w-max(t[1],t[2])<<endl;
			return 0;
		}
	}
	cout<<cnt/2;
	return 0;
}
