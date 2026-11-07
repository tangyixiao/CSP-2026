#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1!=c2)//不在同一车间 
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<1;
			int a1=s1[2]-'A',a2=s2[2]-'A';
			if(a1>=0&&a1<=2&&a2>=0&&a2<=2)
			{
				cout<<1;
				if(abs(a1-a2)==1)
				{
					cout<<1;
				}
				else cout<<0;//不相邻 
			}
			else if(a1>=3&&a1<=5&&a2>=3&&a2<=5)
			{
				cout<<1;
				if(abs(a1-a2)==2)
				{
					cout<<1;
				}
				else cout<<0;//不相邻 
			}
			else cout<<"00";//不在过道同一侧 
		}
		else cout<<"000";//不在同一排 
	}	
	return 0;
}