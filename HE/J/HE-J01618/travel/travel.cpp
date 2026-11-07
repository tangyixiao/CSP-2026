#include<bits/stdc++.h>
using namespace std;
string a,aa,b,bb;
bool ans[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>aa>>b>>bb;
	if(a==b)
	{
		ans[1]=1;
		if(aa[0]==bb[0]&&aa[1]==bb[1])
		{
			ans[2]=1;
			int aaa,bbb;
			if(aa[2]=='A')
			{
				aaa=1;
			}
			if(aa[2]=='B')
			{
				aaa=2;
			}
			if(aa[2]=='C')
			{
				aaa=3;
			}
			if(aa[2]=='D')
			{
				aaa=4;
			}
			if(aa[2]=='F')
			{
				aaa=5;
			}
			if(bb[2]=='A')
			{
				bbb=1;
			}
			if(bb[2]=='B')
			{
				bbb=2;
			}
			if(bb[2]=='C')
			{
				bbb=3;
			}
			if(bb[2]=='D')
			{
				bbb=4;
			}
			if(bb[2]=='F')
			{
				bbb=5;
			}
			int asd,bsd;
			if(aaa<=3)
			{
				asd=1;
			}
			if(aaa>=4)
			{
				asd=2;
			}
			if(bbb<=3)
			{
				bsd=1;
			}
			if(bbb>=4)
			{
				bsd=2;
			}
			if(asd==bsd)
			{
				ans[3]=1;
				if(abs(aaa-bbb)==1)
				{
					ans[4]=1;
				}
			}
			
		}
	}
	
	
	cout<<ans[1]<<ans[2]<<ans[3]<<ans[4];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
