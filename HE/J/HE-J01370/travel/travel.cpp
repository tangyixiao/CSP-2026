#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	string s,s1,c,c1;
	bool a[10]={0};
	cin>>c>>s;
	cin>>c1>>s1;
	if(c==c1){
		a[1]=1;
		if(s[0]+s[1]==s1[0]+s1[1])
		{
			a[2]=1;
			if(s[2]=='C'&&s1[2]=='D' || s[2]=='D'&&s1[2]=='C')
			{
				cout<<1100;
				return 0;
			}
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C' && s[2]=='A'||s[2]=='B'||s[2]=='C')
			{
				a[3]=1;
				if(s1[2]=='A'&&s1[2]=='B' || s1[2]=='B'&&s[2]=='A' || s[2]=='B'&&s1[2]=='C' || s[2]=='C'&&s1[2]=='B' || s[2]=='D'&&s1[2]=='F' || s[2]=='F'&&s1[2]=='D') a[4]=1;
				else
				{
					cout<<1110;
					return 0;
				}
			}
			else if(s1[2]=='F'||s1[2]=='D' && s[2]=='D'||s[2]=='F')
			{
				a[3]=1;
				if(s1[2]=='A'&&s1[2]=='B' || s1[2]=='B'&&s[2]=='A' || s[2]=='B'&&s1[2]=='C' || s[2]=='C'&&s1[2]=='B' || s[2]=='D'&&s1[2]=='F' || s[2]=='F'&&s1[2]=='D') a[4]=1;
				else
				{
					cout<<1110;
					return 0;
				}
			}
			else
			{
				cout<<1100;
				return 0;
			}
        }
        else{
        	cout<<1000;
        	return 0;
		}
	}
	for(int i=1;i<=4;i++)
	{
		if(a[i]==1) cout<<1;
		else cout<<0;
	}
	return 0;
}
