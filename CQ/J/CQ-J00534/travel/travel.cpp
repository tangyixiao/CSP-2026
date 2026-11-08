#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string sc1,ss1,sc2,ss2;
	cin>>sc1>>ss1>>sc2>>ss2;
	char cs1=ss1[2],cs2=ss2[2];
	int c1=(sc1[0]-48)*10+(sc1[1]-48),s1=(ss1[0]-48)*10+(ss1[1]-48);
	int c2=(sc2[0]-48)*10+(sc2[1]-48),s2=(ss2[0]-48)*10+(ss2[1]-48);
	if(c1==c2) cout<<"1";
	else cout<<"0";
	
	if(c1==c2)
	{
		if(s1==s2) cout<<"1";
		else cout<<"0";
	}
	else cout<<"0";
	
	bool stp=0,ctp=0;
	if(c1==c2&&s1==s2)
	{
		if(cs1=='D'||cs1=='F') stp=1;
		if(cs2=='D'||cs2=='F') ctp=1;
		if(stp==ctp) cout<<"1";
		else cout<<"0";
	}
	else cout<<"0";
	
	char a[10]={'0','A','B','C','0','D','F','0'};
	if(c1==c2&&s1==s2&&stp==ctp)
	{
		for(int i=1;i<=6;i++)
		{
			if(cs1==a[i]) 
			{
				if(cs2==a[i-1]||cs2==a[i+1]) 
				{
					cout<<"1";
					return 0;
				}
			}
		}
	}
	
	cout<<"0";
	return 0;
}
