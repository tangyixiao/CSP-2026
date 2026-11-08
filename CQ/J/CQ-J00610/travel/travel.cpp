#include<bits/stdc++.h>
using namespace std;
int m,p;
char a[5],b[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>m;
	for(int i=1;i<=3;i++)
	cin>>a[i];
	cin>>p;
	for(int i=1;i<=3;i++)
	cin>>b[i];
	if(m==p)
	{
	    cout<<1;
	    if(a[1]*10+a[2]==b[1]*10+b[2])
	    {
	    	cout<<1;
	    	if(((a[3]=='A'||a[3]=='B'||a[3]=='C')&&(b[3]=='A'||b[3]=='B'||b[3]=='C'))||((a[3]=='D'||a[3]=='F')&&(b[3]=='D'||b[3]=='F')))
	    	{
	    		cout<<1;
	    		if(int(a[3])==int(b[3])+1||int(a[3])==int(b[3])-1||(a[3]=='D'&&b[3]=='F')||(b[3]=='D'&&a[3]=='F'))
	    		cout<<1;
	    		else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
}
