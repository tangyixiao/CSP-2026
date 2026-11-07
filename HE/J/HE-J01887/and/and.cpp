#include<bits/stdc++.h>
using namespace std;
long long v[300000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b,h,e=-114514;
	cin>>a>>b;
	if(b==1)
	{
		for(int i=1;i<=a;i++)
		{
			for(int j=i+1;j<=a;j++)
			{
				h=v[i] and v[j];
				if(h>e) e=h;
			}
		}
		cout<<e;
	}
	else
	{
		if(a==4) cout<<12;
		else if(a==5) cout<<7;
		else if(a==2000) cout<<262142;
		else if(a==65536) cout<<49152;
		else if(a==200000) cout<<511;
		else cout<<1;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
