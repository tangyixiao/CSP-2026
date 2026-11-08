/*
	CSP-S 2026 RP++
	Trick||Treat!
	
	初中最后一次 CSP 
	
	难道就此 AFO 了吗 
	 
	Life blooms like a flower
	Far away or by the road
	Waiting for the one
	To find the way back home 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	int t1=0,t2=0,t3=0,t4=1;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		t1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			t2=1;
			if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C'))
			{
				t3=1;
				if(s1[2]=='A'&&s2[2]=='C') t4=0;
				else if(s1[2]=='C'&&s2[2]=='A') t4=0;
			}
			else if((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F')) t3=1;
		} 
	} 
	if(t3==0) t4=0;
	cout<<t1<<t2<<t3<<t4;
	return 0;
}

