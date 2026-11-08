#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

string c1,s1,c2,s2;
bool f1,f2,f3,f4;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2)
	f1=1;
	
	if(f1)
	{
		string r1=s1.substr(0,2);
		string r2=s2.substr(0,2);
		
		if(r1==r2)
		f2=1;
		
		if(f2)
		{
			char x1=s1[2];
			char x2=s2[2];
			
			if((x1=='A'||x1=='B'||x1=='C')&&(x2=='A'||x2=='B'||x2=='C'))
			f3=1;
			
			if((x1=='D'||x1=='F')&&(x2=='D'||x2=='F'))
			f3=1;
			
			if(f3)
			{
				if((x1=='A'&&x2=='B')||(x1=='B'&&x2=='A')||(x1=='B'&&x2=='C')||(x1=='C'&&x2=='B')||(x1=='D'&&x2=='F')||(x1=='F'&&x2=='D'))
				f4=1;
			}
		}
	}
	
	cout<<f1<<f2<<f3<<f4<<endl;
	
	return 0;
}
