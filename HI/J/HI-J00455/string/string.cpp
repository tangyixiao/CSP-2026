#include<bits/stdc++.h>
using namespace std;
long long l,c=0;
long long b[1000000000];
string a[1000000];
int main()
{
    freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
	cin>>l;
	for(int i=1;i<l;i++)  
	{
		cin>>b[i]>>a[i];
		
	}
	for(int i=0;i<l;i++)
	{
		int e=l;
		if(a[i]!=a[e])
		{
		    if(b[i]>b[e])c=c+b[e];
		    else if(b[i]<b[e])c=c+b[i];
			else c+=0;
		}
		if(i>=l)i=l;
		e--;
	}
	cout<<c;
	return 0;
}  

