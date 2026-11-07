#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string a1,a2,b1,b2;
    char s[4];
    cin>>a1>>a2>>b1>>b2;//
    if(a1==b1)
    {
    	cout<<1;//在同一节车厢 
    	if((a2[0]==b2[0])&&(a2[1]==b2[1]))
    	{
    		cout<<1;//在同一排 
    		if(((a2[2 ]!='D')&&(a2[2]!='F'))&&((b2[2]!='D')&&(b2[2]!='F')))
    		{
    				cout<<1;//未被过道隔开1 在ABC 
    				if((a2[2]=='B')||(b2[2]=='B'))
    				{
    					cout<<1;//有一个人的是B 
					}
					else
					{
						cout<<"0";//没有B 即两人不挨着 
					}
    				
			}
			
			else if((((a2[2]!='A')&&(a2[2]!='B'))&&((a2[2]!='C')&&(b2[2]!='C')))&&((b2[2]!='A')&&(b2[2]!='B')))
			{
				cout<<11;//未被过道隔开2  在DE 
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
	
	
    fclose(stdin);
	fclose(stdout);
	return 0;
}
