#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int x,z;
    string s,a;
    cin>>x>>s;
	cin>>z>>a;
	if(x==z)
	{
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	int p=s[0]*10+s[1],q=a[0]*10+a[1];
	if(p==q)
	{
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	bool w=0;
	if((s[2]>='A'&&s[2]<='C'&&a[2]>='A'&&a[2]<='C')||(s[2]=='D'&&a[2]<='F')||(s[2]=='F'&&a[2]<='D'))
	{
		cout<<"1";
		w=true;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(w)
	{
		if(s[2]>='A'&&s[2]<='C'&&a[2]>='A'&&a[2]<='C')
		{
			if(s[2]+1==a[2]||s[2]-1==a[2])
			{
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		if((s[2]=='D'&&a[2]<='F')||(s[2]=='F'&&a[2]<='D'))
		{
			cout<<"1";
		}
		return 0;
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
