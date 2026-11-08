#include<bits/stdc++.h>
using namespace std;
int main()
{
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	int a,b;
 	char c[3],d[3];
 	cin>>a>>c>>b>>d;
 	if(a!=b)
 	{
 		cout<<"0000";
 		return 0;
	}
	if(c[0]!=d[0]||c[1]!=d[1])
	{
	    cout<<"1000";
	    return 0;
	} 
	if(((c[2]>='A'||c[2]<='C')&&(d[2]>='D'&&d[2]<='F'))||((c[2]>='D'&&c[2]<='F')&&(d[2]>='A'||d[2]<='C')))
	{
	    cout<<"1100";
	    return 0;
    }
	else if((c[2]>='A'||c[2]<='C')&&(d[2]>='A'||d[2]<='C'))
	{
	    cout<<"111";
		if(c[2]=='B'||d[2]=='B')cout<<"1";
		else cout<<"0";
	}
	else if((c[2]>='D'&&c[2]<='F')&&(d[2]>='D'&&d[2]<='F'))
	{
	    cout<<"1111";
	}
    return 0;
}  
