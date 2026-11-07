#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n;
	string c1,s1;
	string c2,s2;
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		string a,b;
		char c,d;
		for(int i=0;i<2;i++) a+=s1[i],b+=s2[i];
		c=s1[2],d=s2[2];
		if(a==b) 
		{
			cout<<1;
			if(('A'<=c && c<='C') && ('A'<=d && d<='C'))
				cout<<1;
			else if(('E'<=c && c<='F') && ('E'<=d && d<='F'))
				cout<<1;
			else
			{
				cout<<"00";
				return 0;
			}
			if((c=='A' && d=='C') || (c=='C' && d=='A')) cout<<"0";
			else cout<<1;
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}