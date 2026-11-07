#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
char b[N];
int main()
{ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,tot;
	cin>>n;	
	for(int i=0;i<n;i++)
	{
		cin>>a[i+1]>>b[i];
		for(int j=1;j<=a[i+1];j++)
		{
			s[j]=b[i];
		}
	} 
	cout<<"0";
	return 0;
}