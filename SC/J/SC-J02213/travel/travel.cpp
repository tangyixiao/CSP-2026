#include<bits/stdc++.h>
using namespace std;
bool q1=true,q2=true,q3=true,q4=true;
void ans()
{
	cout<<q1<<q2<<q3<<q4;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	//车厢 
	if(c1!=c2)
	{
		q1=q2=q3=q4=false;
		ans();
		exit(0);
	}
	else
	{
		q1=true;
	}
	//排 
	if(s1[0]==s2[0] && s1[1]==s2[1])
	{
		q2=true;
	}
	else
	{
		q2=q3=q4=false;
		ans();
		exit(0);
	}
	//侧
	int k1,k2;//分别表示哪一侧，0为abc，1为df 
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C')
	{
		k1=0;
	}
	else
	{
		k1=1;
	}
	
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C')
	{
		k2=0;
	}
	else
	{
		k2=1;
	}
	
	if(k1==k2)
	{
		q3=true;
	}
	else
	{
		q3=q4=false;
		ans();
		exit(0);
	}
	//紧邻
	if(k1==0)
	{
		if(abs((int)(s1[2]-s2[2]))==1)
		{
			q4=true;
		}
		else
		{
			q4=false;
		}
	}
	else if(k1==1)
	{
		q4=true;
	}
	
	ans();
	
	return 0;
}