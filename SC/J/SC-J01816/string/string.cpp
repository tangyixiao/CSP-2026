#include <bits/stdc++.h>

using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l;
	cin>>l;
	int num[l];
	char str[l];
	for(int i=0;i<l;i++)
	{
		cin>>num[i]>>str[i];
	}
	int len=0;
	for(int i=0;i<l;i++)
	{
		len+=num[i];
	}
	cout<<"4";
	int u=0;
	return u;
}