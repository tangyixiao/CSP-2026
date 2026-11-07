#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdin);
	string a,pin;
	int r=0,l=0,cmp=0,che,n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>che;
		cin>>pin;
		for(int j=0;j<che;j++)
		{
			a+=pin;
		}
		r+=che;
		che=0;
		
	}
	r--;
	
	while(r>l)
	{
		if(int(a[r])!=int(a[l]))
		cmp++;
		
		r--;
		l++;
	}
	
	cout<<cmp;
	return 0;
}
