#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int a,b;
    int t,y,cnt=0,sum=0;
    char c[4],d[4];
    cin>>a>>c>>b>>d;    
    if(c[2]=='A'||c[2]=='B'||c[2]=='C')t=0;
    else t=1;
    if(d[2]=='A'||d[2]=='B'||d[2]=='C')y=0;
    else y=1;
    if(a==b)
    {
    	if(c[0]-'0'==d[0]-'0'&&c[1]-'0'==d[1]-'0')
    	{
    		if(t==y)
    		{
			if(c[2]-'A'==d[2]-'A'+1||c[2]-'A'==d[2]-'A'-1)cnt=1;
			if(c[2]-'A'==d[2]-'A'+2||c[2]-'A'==d[2]-'A'-2)sum=1;
			if(t==0&&cnt==1||t==1&&sum==1)
			{
				cout<<"1111";
			}
			else cout<<"1110";
			}
    		else cout<<"1100";
    		
		}
		else cout<<"1000";
	}
    else cout<<"0000";
    fclose(stdin);
    fclose(stdout);
    return 0;
 } 