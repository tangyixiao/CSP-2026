#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[n+2];
	long long w=0;
	char b[n+2];
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		//cout<<a[i]<<endl;
		w+=a[i];
		cin>>b[i];
		//cout<<b[i]<<endl;
	}
	//cout<<w<<endl;
	if((w&2)==0)
	{
		w--;
	}
	for(int i=1;i<=n;i++)
	{
		//cout<<a[i]<<" "; 
		if(a[i]>=(w/2))
		{
			cout<<w-a[i];
			break;
		}
		a[i+1]+=a[i];
	}
	return 0;
}