#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int p;
    long long a[20010],b,d=0;
    char c[20010];
    cin>>b;
    for(int i=0;i<b;i++)
    {
    	cin>>a[i]>>c[i];
    	d+=a[i];
	}
    long long g=d;
	if(d%2==0)
	{
		p=0;
	}
	else p=a[b-b/2];
	for(int i=0,j=b-1;i<=b/2,j>=b/2;i++,j--)
	{
		if(c[i]==c[j])
		{
			d-=min(a[i],a[j]);
		}
	}
	if(g==d&&p==0)
	{
		cout<<d/2;
	}
	else cout<<d-p;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

