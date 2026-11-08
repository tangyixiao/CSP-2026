#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    int a,b;
    char x,y;
	a=s1[0]+s1[1],b=s2[0]+s2[1];
	x=s1[2],y=s2[2];
	if(c1==c2)
	{
		cout<<"1";
		if(a==b)
		{
		cout<<"1";
		
		if(((x=='A'||x=='B'||x=='C')&&(y=='A'||y=='B'||y=='C'))||((x=='D'||x=='F')&&(y=='D'||y=='F')))
		{
			cout<<"1";
			if(x+1==y||x-1==y)
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}
		}else
		{
			cout<<"00";
			return 0;
		}
		}else
		{
			cout<<"000";
			return 0;
		}
	}else
	{
		cout<<"0000";
		return 0;
	}	
	return 0;
}
