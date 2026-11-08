#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1[2],s1[3],c2[2],s2[3];
	int a,b;
	cin>>c1>>s1>>c2>>s2;
	a=s1[2],b=s2[2];
	if(c1[0]!=c2[0]||c1[1]!=c2[1])
		cout<<"0000"<<endl;
	else
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]<='C'&&s2[2]>='A')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))
			{
				if((a+1==b||a-1==b)&&(s1[2]!='C'||s1[2]!='D'))
				{
					cout<<"1111"<<endl;
				}
				else
					cout<<"1110"<<endl;
			}
			else
			    cout<<"1100"<<endl;
		}
		else
			cout<<"1000"<<endl;
	return 0;
}
