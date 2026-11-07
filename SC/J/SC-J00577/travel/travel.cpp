#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,aa,b,bb;
	cin>>a>>aa>>b>>bb;
	int x=(a[0]-'0')*10+(a[1]-'0');
	int y=(b[0]-'0')*10+(b[1]-'0');
	if(x!=y)
		cout<<"0000";
	else
	{
		int xx=(aa[0]-'0')*10+(aa[1]-'0');
		int yy=(bb[0]-'0')*10+(bb[1]-'0');
		if(xx!=yy)
			cout<<"1000";
		else
		{
			int l=aa[2]-'A',r=bb[2]-'A';
			if(l==0||l==1||l==2)
			{
				if(r==3||r==5)
					cout<<"1100";
				else if(l==0&&r==2)
					cout<<"1110";
				else if(l==2&&r==0)
					cout<<"1110";
				else
					cout<<"1111";
			}
			else
			{
				if(r==0||r==1||r==2)
					cout<<"1100";
				else
					cout<<"1111"; 
			}
			
		}
	}
} 