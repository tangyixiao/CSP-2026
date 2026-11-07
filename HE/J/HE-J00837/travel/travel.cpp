#include<bits/stdc++.h>
using namespace std;
const char S=1e2;
char s[S][S];
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	int q=0;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>s[i][j];
		}
	}
	if(s[1]==s[3])
	{
		cout<<"1"<<" ";
	
	    for(int j=1;j<=2;j++)
		{
			if(s[2][j]==s[4][j])
			{
				q++;
			    if(q=2){
			    	cout<<"1"<<" ";
			    	if(s[2][3]<'D'&&s[4][3]<'D')
			    	{
			    		cout<<"1";
			    		if(s[2][3]==s[4][3]+1||s[2][3]==s[4][3]-1)
			    		{
			    			cout<<"1";
						}
						else cout<<"0";
					}
					else
					{
						if(s[2][3]>'c'&&s[4][3]>'c')
						{
							cout<<"1 1";
						}	
					
					}
				}
				
				
			}
		}	
	    
    }
	else cout<<"0 0 0 0";
	cout<<"0 0 0";
	
	return 0;
}
