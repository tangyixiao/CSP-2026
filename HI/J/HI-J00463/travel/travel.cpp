#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

    string a,b,c,d;
	cin>>a>>b>>c>>d; 
	int aa=b[2]-'A'+1;
	int bb=d[2]-'A'+1;
	if(aa>3)
	{
		aa+=10;
	}
	if(bb>3)
	{
		bb+=10;
	}
    int akk01=a[1]-'0';
    int akk00=a[0]-'0';
    int akk11=b[1]-'0';
    int akk10=b[0]-'0';
    int bkk01=c[1]-'0';
    int bkk00=c[0]-'0';
    int bkk11=d[1]-'0';
    int bkk10=d[0]-'0';
    int akk=akk01+akk00*10;
    int bkk=akk11+akk10*10;
    int ckk=bkk01+bkk00*10;
    int dkk=bkk11+bkk10*10;
    if(akk==ckk)
    {
    	cout<<1;
    	if(bkk==dkk)
    	{
    		cout<<1;
    		if(abs(aa-bb)<3)
    		{
    			cout<<1;
    			if(abs(aa-bb)==1)
    			{
    				cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
    		else
    		{
    			cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
    return 0;
}

