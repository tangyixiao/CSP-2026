#include<bits/stdc++.h>
using namespace std;
struct node{
	long long k;
	char c;
}a[2000001];
signed long long n,l,k,c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>k>>c;
		if(i==1)
		{
			l++; 
			a[i].k=k;
			a[i].c=c;
		}
		else
		{
			if(a[l].c==c)
			{
				a[l].k+=k;
			}
		}
    }
    for(int i=1;i<=l;i++)
    {
    	cout<<a[i].k<<a[i].c<<endl;
	}
	return 0;
}
