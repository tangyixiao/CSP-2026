#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
long long x,y,v,w,qw,wq;
int pd(int e)
{
	if(e<=2)
	{
		return 1;
	}
	else if(e>=3)
	{
		return 2; 
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>a>>b>>c>>d;
	if(a==c)
	{
		cout <<1;
		x=(int)b[0]-'0';
		y=(int)b[1]-'0';
		v=(int)d[0]-'0';
		w=(int)d[1]-'0';
		if(x==v && y==w)
		{
			cout <<1;
			qw=(int)b[2]-'A';
			wq=(int)d[2]-'A';
			if(pd(qw)==pd(wq))
			{
				cout <<1;
				if(abs(qw-wq)==1 || (qw==3 && wq==5) || (qw==5 && wq==3))
				{
					cout <<1;
					exit(0);
				}
				else{
					cout <<"0";
					exit(0); 
				}
			}
			else{
				cout <<"00";
				exit(0);
			}
		}
		else{
			cout <<"000";
			exit(0);
		}
	}
	else
	{
		cout <<"0000";
		exit(0);
	}
	return 0;
}
