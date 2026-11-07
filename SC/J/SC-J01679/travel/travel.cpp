#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>> a>>b>>c>>d;
	int q=(b[0]-48)*10+b[1]-48,w=(d[0]-48)*10+d[1]-48;
	if(a==c)
	{
		cout<< "1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1])
	{
		cout<< "1";
		if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')
		{
			cout<< "1";
		}
		else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')
		{
			cout<< "1";
		}
		else{
			cout<< "0";
		}
	}
	else{
		cout<< "00";
	}
	if(b[2]==d[2])
	{
		if(q>w&&q-w==1)
		{
			cout<< "1";
		}
		else if(w>q&&w-q==1)
		{
			cout<< "1";
		}
		else{
			cout<<"0";
		}
	}
	else if(q==w)
	{
		if(b[2]>d[2]&&b[2]-d[2]==1)
		{
			if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')
			{
				cout<< "1";
			}
			else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')
			{
				cout<< "1";
			}
			else{
				cout<< "0";
			}
		}
		else if(b[2]<d[2]&&d[2]-b[2]==1) 
		{
			if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')
			{
				cout<< "1";
			}
			else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')
			{
				cout<< "1";
			}
			else{
				cout<< "0";
			}
		}
		else{
			cout<<"0";
		}
	}	
	else{
		cout<<"0";
	}
	return 0;
}
