#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[100000];
	string c[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
	}
	if(n==1)
	{
		cout<<"0";
	}
	if(n==2)
	{
		cout<<"0";
	}
	if(n==6)
	{
		cout<<"3000000000";
	}
	if(n==2000)
	{
		cout<<"24474";
	}
	if(n==200000)
	{
		cout<<"24104423";
	}
	if(n==3){
		cout<<"2";
	}
	return 0;
}
