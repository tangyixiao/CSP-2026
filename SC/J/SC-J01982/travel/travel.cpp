#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,i,n,p;
string aa,bb,s;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);
	n=s.size();
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			p++;
			continue;
		}
		if(p==0)a=a*10+s[i]-'0';
		if(p==1)aa+=s[i];
		if(p==2)b=b*10+s[i]-'0';
		if(p==3)bb+=s[i]; 
	}
	if(a==b)
	{
		cout<<"1";
		if(aa[0]==bb[0]&&aa[1]==bb[1])
		{
			cout<<"1";
			if(aa[2]=='D'||aa[2]=='F')x=2;
			else x=1;
			if(bb[2]=='D'||bb[2]=='F')y=2;
			else y=1;
			if(x==y)
			{
				cout<<"1";
				x=0;
				y=0;
				if(aa[2]=='A')x=1;
				if(aa[2]=='B')x=2;
				if(aa[2]=='C')x=3;
				if(aa[2]=='D')x=4;
				if(aa[2]=='F')x=5;
				if(bb[2]=='A')y=1;
				if(bb[2]=='B')y=2;
				if(bb[2]=='C')y=3;
				if(bb[2]=='D')y=4;
				if(bb[2]=='F')y=5;
				if(abs(x-y)==1)cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
}